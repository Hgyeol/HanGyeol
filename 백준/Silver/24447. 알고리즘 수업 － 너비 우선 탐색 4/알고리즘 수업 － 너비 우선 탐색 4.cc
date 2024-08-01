// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    
    int n, m, r, node, edge, cnt=1;
    long long int res=0;
    
    cin >> n >> m >> r;
    
    vector<int> bfs[n+1];
    long long int visited[n+1];
    int result[100001]={0};
    fill(visited, visited+n+1, -1);
    for(int i = 0; i < m; i++) {
        cin >> node >> edge;
        bfs[node].push_back(edge);
        bfs[edge].push_back(node);
    }
    for(int i = 1; i <= n; i++) {
        sort(bfs[i].begin(), bfs[i].end());
    }
    queue<int> q;
    q.push(r);
    
    visited[r]=0;
    while(!q.empty()) {
        int node = q.front();
        //cout << "node : " << node <<"\n";
        q.pop();
        result[node] = cnt;
        cnt++;
        for(int i = 0; i < bfs[node].size(); i++) {
            int next = bfs[node][i];
            if(visited[next]==-1) {
                visited[next]=visited[node]+1;
                q.push(next);
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        res += result[i] * visited[i];
    }
    cout << res;
    return 0;
}