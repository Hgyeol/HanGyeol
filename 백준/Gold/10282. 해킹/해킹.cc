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
    int t;
    cin >> t;
    while(t--) {
        int n,d, c, a,b,s,cnt=0, max=0;
        int dist[10001];
        vector<pair<int,int>> vec[10001];
        cin >> n >> d >> c;
        for(int i = 0; i < d; i++) {
            cin >> a >> b >> s;
            vec[b].push_back(make_pair(a,s));
        }
        for(int i = 1; i <= n; i++) dist[i] = INF;
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        
        pq.push(make_pair(0,c));
        dist[c]=0;
        
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
                    pq.push(make_pair(dist[next], next));
                }
            }
        }
        for(int i = 1; i <= n; i++) {
            if(dist[i]!=INF) {
                cnt++;
                if(max < dist[i]) {
                    max = dist[i];
                }
            }
        }
        cout << cnt << " " << max << "\n";
    }
    return 0;
}