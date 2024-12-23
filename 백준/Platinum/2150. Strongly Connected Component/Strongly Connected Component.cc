// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#define MAX 10001
using namespace std;

int id=1, d[MAX];
bool vis[MAX];
vector<int> arr[MAX];
vector<vector<int>> SCC;
stack<int> s;

bool compare(vector<int> a, vector<int> b) {
    return a[0] < b[0];
}

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
            if(t==x) break;
        }
        SCC.push_back(scc);
    }
    return p;
}

int main() {
    int v,e,a,b;
    cin >> v >> e;
    while(e--) {
        cin >> a >> b;
        arr[a].push_back(b);
    }
    for(int i = 1; i <= v; i++) {
        if(d[i]==0) dfs(i);
    }
    
    // for(int i = 1; i <= v; i++) cout << "i : " << d[i] << "\n";
    
    cout << SCC.size() << "\n";
    
    for(int i = 0; i < SCC.size(); i++) {
        sort(SCC[i].begin(),SCC[i].end());
        // for(int j = 0; j < SCC[i].size(); j++) cout << SCC[i][j] << " ";
        // printf("-1\n");
    }
    sort(SCC.begin(), SCC.end(), compare);
    for(int i = 0; i < SCC.size(); i++) {
        for(int j = 0; j < SCC[i].size(); j++) cout << SCC[i][j] << " ";
        printf("-1\n");
    }
    return 0;
}