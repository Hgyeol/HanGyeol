// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int cnt = 0;
void dfs(int node, vector<int> DFS[], bool visited[]) {
    visited[node] = true;
    //cout << node << " ";
    
    for(int i = 0; i < DFS[node].size(); i++) {
        int next = DFS[node][i];
        if(visited[next] == false) {
            cnt++;
            dfs(next, DFS, visited);
        }
    }
}

int main() {
    
    int n, m, node, edge;
    
    cin >> n >> m;
    
    vector<int> DFS[n+1];
    bool visited[n+1];
    
    fill(visited, visited+n+1, false);
    
    for(int i = 0; i < m; i++) {
        cin >> node >> edge;
        DFS[node].push_back(edge);
        DFS[edge].push_back(node);
    }
    
    for(int i = 1; i <= n; i++) {
        sort(DFS[i].begin(), DFS[i].end());
    }
    dfs(1, DFS, visited);
    cout << cnt;
    return 0;
}