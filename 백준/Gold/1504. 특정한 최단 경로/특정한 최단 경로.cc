// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <vector>
#define INF 987654321
#include <algorithm>
using namespace std;

int n, e, a, b, c, u, v,res=0, v1=INF,v2=INF,v3=INF,v4=INF;
int dist[801];
vector<pair<int,int>> vec[801];
void d(int k) {
    for(int i = 1; i <= n; i++) dist[i] = INF;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    
    pq.push(make_pair(0,k));
    dist[k] = 0;
    
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
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> e;
    for(int i = 0; i < e; i++) {
        cin >> a >> b >> c;
        vec[a].push_back(make_pair(b,c));
        vec[b].push_back(make_pair(a,c));
    }
    cin >> u >> v;
    d(1);
    if(dist[u] != INF) {
        v1 = dist[u];
        v2 = dist[u];
        d(u);
        if(dist[v]==INF) res=-1;
        else {
            v1 += dist[v];
            v2 += dist[v] * 2;
            d(v);
            if(dist[n]==INF) res=-1;
            else v1 += dist[n];
            d(u);
            if(dist[n]==INF) res=-1;
            else v2 += dist[n];
        }
    }
    else res = -1;
    d(1);
    if(dist[v]!=INF) {
        v3 = dist[v];
        v4 = dist[v];
        d(v);
        if(dist[u]==INF) res=-1;
        else {
            v3 += dist[u];
            v4 += dist[u] * 2;
            d(u);
            if(dist[n]==INF) res=-1;
            else v3 += dist[n];
            d(v);
            if(dist[n]==INF) res=-1;
            else v4 += dist[n];
        }
    }
    else res = -1;
    if(res==-1) cout << -1;
    else {
        cout << min({v1,v2,v3,v4});
    }
    return 0;
}