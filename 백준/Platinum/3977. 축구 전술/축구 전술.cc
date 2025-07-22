// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#define MAX 100001

using namespace std;

int d[MAX], id = 1;
bool vis[MAX];
int g[MAX];
bool inDegree[MAX];
vector<vector<int>> SCC;
vector<int> arr[MAX];
vector<int> res;
stack<int> s;

int dfs(int x) {
    d[x] = id++;
    s.push(x);
    int p = d[x];
    for(int i = 0; i < arr[x].size(); i++) {
        int y = arr[x][i];
        if(d[y]==0) p = min(p, dfs(y));
        else if(!vis[y]) p = min(p, d[y]);
    }
    
    if(p == d[x]) {
        vector<int> scc;
        while(1) {
            int t = s.top();
            s.pop();
            scc.push_back(t);
            vis[t] = true;
            g[t] = SCC.size() + 1;
            if(t == x) break;
        }
        // cout << "SCC : ";
        // for(int i = 0; i < scc.size(); i++) cout << scc[i] << ", ";
        // cout << "\n";
        SCC.push_back(scc);
    }
    return p;
}

int main() {
    int t, n, m, a, b;
    cin >> t;
    while(t--) {
        res.clear();
        fill(d, d + MAX, 0);
        fill(g, g + MAX, 0);
        fill(inDegree, inDegree+MAX, false);
        fill(vis, vis+MAX, false);
        SCC.clear();
        cin >> n >> m;
        for(int i = 0; i < n; i++) arr[i].clear();
        while(m--) {
            cin >> a >> b;
            arr[a].push_back(b);
        }
        for(int i = 0; i < n; i++) {
            if(d[i]==0) dfs(i);
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < arr[i].size(); j++) {
                int y = arr[i][j];
                // cout << "p : " << i << ", s : " << y << "\n";
                if(g[i]!=g[y]) inDegree[g[y]] = true;
            }
        }
        int cnt=0;
        for(int i = 0; i < SCC.size(); i++) {
            if(!inDegree[i+1]) {
                // cout << "inDe idx : " << i << "\n";
                cnt++;
                res.insert(res.end(), SCC[i].begin(), SCC[i].end());
            }
        }
        if(cnt != 1) cout << "Confused\n";
        else {
            sort(res.begin(), res.end());
            for(int i = 0; i < res.size(); i++) cout << res[i] << "\n";
        }
        // cout << "G : ";
        // for(int i = 0; i < n; i++) cout << g[i] << ", ";
        // cout << "\n";
        // cout << "inDegree : ";
        // for(int i = 0; i < n; i++) cout << inDegree[i] << ", ";
        // cout << "\n";
        // cout << "cnt : " << cnt << "\n";
        cout << "\n";
        
    }
    return 0;
}