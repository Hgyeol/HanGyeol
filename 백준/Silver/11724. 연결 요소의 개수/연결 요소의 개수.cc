// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

void bfs(int node, vector<int> BFS[], bool visited[]) {
    queue<int> queue;
    queue.push(node);
    
    visited[node] = true;
    
    while(!queue.empty()) {
        int node = queue.front();
        queue.pop();
        //cout << node << " ";
        for(int i = 0; i < BFS[node].size(); i++) {
            int next = BFS[node][i];
            if(visited[next] == false) {
                queue.push(next);
                visited[next] = true;
            }
        }
    }
}

int main() {
    
    int n, m, node, edge, cnt=0;
    
    cin >> n >> m;
    
    vector<int> BFS[n+1];
    bool visited[n+1];
    
    fill(visited, visited+n+1, false);
    
    for(int i = 0; i < m; i++) {
        cin >> node >> edge;
        BFS[node].push_back(edge);
        BFS[edge].push_back(node);
    }
    
    for(int i = 1; i <= n; i++) {
        sort(BFS[i].begin(), BFS[i].end());
    }
    for(int i = 1; i <= n; i++) {
        if(visited[i]==false) {
            bfs(i, BFS, visited);
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}