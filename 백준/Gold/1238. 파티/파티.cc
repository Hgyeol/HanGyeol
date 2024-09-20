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
    int n, m, x, a, b, c;
    int dist[1001];
    int res[1001]={0};
    vector<pair<int,int>> vec[1001];
    cin >> n >> m >> x;
    for(int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        vec[a].push_back(make_pair(b,c));
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) dist[j] = INF;
    
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        pq.push(make_pair(0,i));
        dist[i]=0;
        
        while(!pq.empty()) {
            int node = pq.top().second;
            int cost = pq.top().first;
            pq.pop();
            for(int j = 0; j < vec[node].size(); j++) {
                int next = vec[node][j].first;
                int ncost = vec[node][j].second;
                
                if(dist[next] > cost + ncost) {
                    dist[next] = cost + ncost;
                    pq.push(make_pair(dist[next], next));
                }
            }
        }
        res[i] += dist[x];
    }
    
    for(int i = 1; i <= n; i++) dist[i] = INF;
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
    pq.push(make_pair(0,x));
    dist[x]=0;
        
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
    for(int i = 1; i <= n; i++) {
        res[i] += dist[i];
    }
    int max = 0;
    for(int i = 1; i <= n; i++) {
        if(max < res[i]) max = res[i];
    }
    cout << max;
    return 0;
}