// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

void dfs(int node, vector<int> DFS[], bool visited[]) {
    visited[node] = true;
    cout << node << " ";
    
    for(int i = 0; i < DFS[node].size(); i++) {
        int next = DFS[node][i];
        if(visited[next] == false) {
            dfs(next, DFS, visited);
        }
    }
}

void bfs(int node, vector<int> BFS[], bool visited[]) {
    queue<int> queue;
    queue.push(node);
    
    visited[node] = true;
    
    while(!queue.empty()) {
        int node = queue.front();
        queue.pop();
        cout << node << " ";
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
    
    int n, m, start, node, edge;
    
    cin >> n >> m >> start;
    
    // n+1을 하는 이유 : node의 인덱스를 편하게 이용하기 위함
    vector<int> DFS[n+1];
    vector<int> BFS[n+1];
    bool visited[n+1];
    
    fill(visited, visited+n+1, false);
    
    for(int i = 0; i < m; i++) {
        cin >> node >> edge;
        
        DFS[node].push_back(edge);
        DFS[edge].push_back(node);
        BFS[node].push_back(edge);
        BFS[edge].push_back(node);
    }
    
    for(int i = 1; i <= n; i++) {
        sort(DFS[i].begin(), DFS[i].end());
        sort(BFS[i].begin(), BFS[i].end());
    }
    
    dfs(start, DFS, visited);
    cout << "\n";
    fill(visited, visited+n+1, false);
    
    bfs(start, BFS, visited);
    return 0;
}