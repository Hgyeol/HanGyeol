// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int t, n, m, k, X,Y, x, y, x2, y2, fir, sec;
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    cin >>  t;
    while(t--) {
        cin >> m >> n >> k;
        int cnt = 0;
        int arr[50][50]={0};
        int visited[50][50]={0};
        vector<pair<int, int>> v;
        while(k--) {
            cin >> Y >> X;
            arr[X][Y] = 1;
            v.push_back(make_pair(X,Y));
        }
        for(int i = 0; i < v.size(); i++) {
            // cout << v[i].first << " - " << v[i].second << "arr : " << arr[v[i].first][v[i].second] << "\n";
        }
        // cout << "size : " << v.size() << "\n";
        for(int i = 0; i < v.size(); i++) {
            fir = v[i].first;
            sec = v[i].second;
            queue<pair<int, int>> q;
            if(visited[fir][sec] == 0) {
                visited[fir][sec] = 1;
                q.push({fir,sec});
                
                while(!q.empty()) {
                    x = q.front().first;
                    y = q.front().second;
                    q.pop();
                    // cout << "pop()\n";
                    for(int i = 0; i<4; i++) {
                        x2 = x + dx[i];
                        y2 = y + dy[i];
                        
                        if(x2 < 0 || y2 < 0 || x2 >=n || y2 >= m) continue;
                        if(arr[x2][y2]==0) continue;
                        if(visited[x2][y2]==1) continue;
                        // cout << "ALL PASS" << x2 << "-" << y2 <<"\n";
                        visited[x2][y2] = 1;
                        q.push({x2, y2});
                    }
                }
                cnt++;
            }
            
        }
        
        cout << cnt << "\n";
        //cout << visited[n-1][m-1];
    }
    
    
    return 0;
}