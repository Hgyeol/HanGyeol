// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main() {
    int w, h, cnt=0;
    while(1) {
        cin >> w >> h;
        if(w!=0 && h!=0) {
            cnt = 0;
            int arr[h][w]={0};
            vector<pair<int, int>> v;
            bool visited[50][50] = {false};
            for(int i = 0; i < h; i++) {
                for(int j = 0; j < w; j++) {
                    cin >> arr[i][j];
                    if(arr[i][j]==1) v.push_back(make_pair(i,j));
                }
            }
            queue<pair<int, int>> q;
            int dx[8] = {1,0,-1,0,1,1,-1,-1};
            int dy[8] = {0,1,0,-1,-1,1,-1,1};
            for(int i = 0; i < v.size(); i++) {
                int fir = v[i].first;
                int sec = v[i].second;
                if(visited[fir][sec]==0) {
                    visited[fir][sec] = 1;
                    q.push({fir, sec});
                
                    while(!q.empty()) {
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        for(int i = 0; i < 8; i++) {
                            int x2 = x + dx[i];
                            int y2 = y + dy[i];
                            
                            if(x2 < 0 || y2 < 0 || x2 >= h || y2 >= w) continue;
                            if(arr[x2][y2]==0) continue;
                            if(visited[x2][y2]==1) continue;
                            visited[x2][y2] = 1;
                            q.push({x2, y2});
                        }
                    }
                    cnt++;
                }
            }
            cout << cnt << "\n";
            
        }
        else break;
    }
    
    return 0;
}