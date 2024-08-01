// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    
    int n, m, start, node, edge,cnt=1;
    int result[100001]={0};
    cin >> n >> m >> start;
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
    
    queue<int> queue;
    queue.push(start);
    
    visited[start] = true;
    
    while(!queue.empty()) {
        int node = queue.front();
        queue.pop();
        result[node] = cnt;
        cnt++;
        for(int i = 0; i < BFS[node].size(); i++) {
            int next = BFS[node][i];
            if(visited[next] == false) {
                queue.push(next);
                visited[next] = true;
            }
        }
    }
    for(int i = 1; i <= n; i++) cout << result[i] << "\n";
    return 0;
}