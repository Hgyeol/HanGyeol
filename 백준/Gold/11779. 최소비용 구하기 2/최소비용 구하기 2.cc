// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define INF 987654321
using namespace std;
vector<int> res;
int from[1001];

void pp(int e) {
    if(from[e] != -1) {
        pp(from[e]);
    }
    res.push_back(e);
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m, a,b,c, s,e;
    int dist[1001];
    
    vector<pair<int,int>> vec[1001];
    cin >> n >> m;
    fill(from, from+1001, -1);
    for(int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        vec[a].push_back(make_pair(b,c));
    }
    cin >> s >> e;
    for(int i = 1; i <= n; i++) dist[i] = INF;
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    pq.push(make_pair(0,s));
    dist[s]=0;
    while(!pq.empty()) {
        int node = pq.top().second;
        int cost = pq.top().first;
        pq.pop();
        if(cost > dist[node]) continue;
        for(int i = 0; i < vec[node].size(); i++) {
            int next = vec[node][i].first;
            int ncost = vec[node][i].second;
            
            if(dist[next] > cost + ncost) {
                dist[next] = cost + ncost;
                from[next] = node; 
                pq.push(make_pair(dist[next], next));
            }
        }
    }
    cout << dist[e] << "\n";
    
    pp(e);
    
    cout << res.size() << "\n";
    for(int i = 0; i < res.size(); i++) {
         cout << res[i] << " ";
    }
    
    
    return 0;
}