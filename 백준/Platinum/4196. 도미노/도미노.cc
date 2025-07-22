// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
#include <vector>
#define MAX 100001

using namespace std;

int id = 1;
vector<vector<int>> SCC;
stack<int> s;
vector<int> arr[MAX];
bool vis[MAX];
int d[MAX];
int g[MAX];
bool inDegree[MAX];

int dfs(int node) {
    d[node] = id++;
    s.push(node);
    int p = d[node];
    for(int i = 0; i < arr[node].size(); i++) {
        int next = arr[node][i];
        if(d[next] == 0) p = min(p, dfs(next));
        else if(!vis[next]) p = min(p, d[next]);
    }
    if(p == d[node]) {
        vector<int> scc;
        // cout << "new - ";
        while(1) {
            int t = s.top();
            s.pop();
            scc.push_back(t);
            g[t] = SCC.size() + 1;
            vis[t] = true;
            // cout << t << ", ";
            if(t == node) break;
        }
        // cout << "\n";
        SCC.push_back(scc);
    }
    return p;
}

int main() {
    int t, n, m;
    cin >> t;
    while(t--) {
        SCC.clear();
        fill(d, d+MAX, 0);
        fill(g, g+MAX, 0);
        fill(inDegree, inDegree+MAX, false);
        fill(vis, vis+MAX, false);
        cin >> n >> m;
        for(int i = 1; i <= n ; i++) {
            arr[i].clear();
        }
        for(int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            arr[x].push_back(y);
        }
        for(int i = 1; i <= n; i++) {
            if(d[i]==0) dfs(i);
        }
        for(int i = 1; i <= n; i++) {
            for(int j = 0; j < arr[i].size(); j++) {
                int y = arr[i][j];
                if(g[i] != g[y]) inDegree[g[y]] = true;
            }
        }
        int res = 0;
        for(int i = 1; i <= SCC.size(); i++) {
            if(!inDegree[i]) res++;
            // for(int j = 0; j < SCC[i].size(); j++) cout << SCC[i][j] << " ";
            // printf("-1\n");
        }
        cout << res << "\n";
    }
    return 0;
}