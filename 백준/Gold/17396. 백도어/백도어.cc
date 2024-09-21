// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <queue>
#define INF 10000000000000
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n, m, a,b,t;
    long long int c[100001]={0};
    long long int dist[100001]={0};
    vector<pair<long long int,long long int>> v[100001];
    cin >> n >> m;
    for(long long int i = 0; i < n; i++) {
        cin >> c[i];
        dist[i]=INF;
    }
    for(long long int i = 0; i < m; i++) {
        cin >> a >> b >> t;
        if((c[a] == 0 && c[b] == 0) || (a == n-1 || b == n-1)) {
            v[a].push_back(make_pair(b,t));
            v[b].push_back(make_pair(a,t));
        }
    }
    priority_queue<pair<long long int, long long int>, vector<pair<long long int, long long int>>, greater<pair<long long int, long long int>>> pq;
    pq.push(make_pair(0,0));
    dist[0]=0;
    while(!pq.empty()) {
        long long int node = pq.top().second;
        long long int cost = pq.top().first;
        pq.pop();
        if(dist[node] < cost) continue;
        for(long long int i = 0; i < v[node].size(); i++) {
            long long int next = v[node][i].first;
            long long int ncost= v[node][i].second;
            if(dist[next] > cost + ncost) {
                dist[next] = cost + ncost;
                pq.push(make_pair(dist[next], next));
            }
        }
    }
    if(dist[n-1]==INF) cout << "-1";
    else cout << dist[n-1];
    return 0;
}