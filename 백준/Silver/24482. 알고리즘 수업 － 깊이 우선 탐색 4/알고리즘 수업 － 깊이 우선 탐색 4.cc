// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int result[100001]={0};
//int cnt=1;
void dfs(int bef, int node, vector<int> DFS[], int visited[]) {
    visited[node] = visited[bef] + 1;
    //cout << node << " ";
    // result[node] = cnt;
    // cnt++;
    for(int i = 0; i < DFS[node].size(); i++) {
        int next = DFS[node][i];
        if(visited[next] == -1) {
            dfs(node, next, DFS, visited);
        }
    }
}

int main() {
    
    int n, m, r, node, edge;
    
    cin >> n >> m >> r;
    
    vector<int> DFS[n+1];
    int visited[n+1];
    
    fill(visited, visited+n+1, -1);
    
    for(int i = 0; i < m; i++) {
        cin >> node >> edge;
        
        DFS[node].push_back(edge);
        DFS[edge].push_back(node);
    }
    
    for(int i = 1; i <= n; i++) {
        sort(DFS[i].rbegin(), DFS[i].rend());
    }
    dfs(0, r, DFS, visited);
    for(int i = 1; i <= n; i++) {
        cout << visited[i] << "\n";
    }
    return 0;
}