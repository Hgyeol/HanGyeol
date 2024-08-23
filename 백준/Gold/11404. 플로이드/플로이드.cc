// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <vector>
#define INF 987654321
using namespace std;
int main() {
    int n, m, a, b, c, s, e, dist[101];
    vector<pair<int,int>> v[101];
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        v[a].push_back(make_pair(b,c));
    }
    
    for(int i = 1; i <= n; i++) {
        priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
        for(int l = 0; l <= n; l++) dist[l] = INF;
        pq.push(make_pair(0, i));
        dist[i] = 0;
        while(!pq.empty()) {
            int node = pq.top().second;
            int cost = pq.top().first;
            pq.pop();
            if(cost > dist[node]) continue;
            for(int j = 0; j < v[node].size(); j++) {
                int next = v[node][j].first;
                int ncost = v[node][j].second;
                
                if(dist[next] > cost + ncost) {
                    dist[next] = cost + ncost;
                    pq.push(make_pair(dist[next], next));
                }
            }
        }
        for(int j = 1; j <= n; j++) {
            if(dist[j]==INF) cout << "0 ";
            else cout << dist[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}