// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <vector>
#define INF 987654321
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int v, e, k, a,b,c;
    int dist[20010];
    vector<pair<int,int>> vec[20010];
    cin >> v >> e >> k;
    for(int i = 0; i < e; i++) {
        cin >> a >> b >> c;
        vec[a].push_back(make_pair(b,c));
    }
    for(int i = 1; i <= v; i++) dist[i] = INF;
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    pq.push(make_pair(0,k));
    dist[k]=0;
    
    while(!pq.empty()) {
        int node = pq.top().second;
        int cost = pq.top().first;
        pq.pop();
        for(int i = 0; i < vec[node].size(); i++) {
            int next = vec[node][i].first;
            int ncost = vec[node][i].second;
            
            if(dist[next] > cost + ncost) {
                dist[next] = cost + ncost;
                pq.push(make_pair(dist[next], next));
            }
        }
    }
    for(int i = 1; i <= v; i++) {
        if(dist[i]==INF) cout << "INF\n";
        else cout << dist[i] << "\n";
    }
    return 0;
}