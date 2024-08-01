// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    
    int n, m, r, node, edge;
    
    cin >> n >> m >> r;
    
    vector<int> bfs[n+1];
    int visited[n+1];
    fill(visited, visited+n+1, -1);
    for(int i = 0; i < m; i++) {
        cin >> node >> edge;
        bfs[node].push_back(edge);
        bfs[edge].push_back(node);
    }
    
    queue<int> q;
    q.push(r);
    
    visited[r]=0;
    while(!q.empty()) {
        int node = q.front();
        //cout << "node : " << node <<"\n";
        q.pop();
        for(int i = 0; i < bfs[node].size(); i++) {
            int next = bfs[node][i];
            if(visited[next]==-1) {
                visited[next]=visited[node]+1;
                q.push(next);
            }
        }
    }
    for(int i = 1; i <= n; i++) cout << visited[i] << "\n";
    return 0;
}