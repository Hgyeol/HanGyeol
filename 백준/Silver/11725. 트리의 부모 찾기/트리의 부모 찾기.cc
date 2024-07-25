// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int result[100001];
void bfs(vector<int> BFS[], bool visited[]) {
    queue<int> q;
    q.push(1);
    visited[1]=true;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        for(int i = 0; i < BFS[node].size(); i++) {
            int next = BFS[node][i];
            if(visited[next]== false) {
                result[next] = node;
                q.push(next);
                visited[next] = true;
            }
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, node, edge;
    
    cin >> n;
    for(int i = 0; i <= n; i++) result[i]=-1;
    vector<int> BFS[n+1];
    bool visited[n+1];
    fill(visited, visited+n+1, false);
    for(int i = 0; i < n-1; i++) {
        cin >> node >> edge;
        BFS[node].push_back(edge);
        BFS[edge].push_back(node);
    }
    bfs(BFS, visited);
    for(int i=2; i <= n; i++) {
        cout << result[i] << "\n";
    }
    return 0;
}