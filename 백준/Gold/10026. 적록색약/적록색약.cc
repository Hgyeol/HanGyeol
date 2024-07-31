// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    int n, Ccnt=0, RGcnt=0, Bcnt=0;
    cin >>n;
    char arr[100][100]={0};
    vector<pair<int, int>> r;
    vector<pair<int, int>> g;
    vector<pair<int, int>> b;
    vector<pair<int, int>> rg;
    bool visited[100][100] = {false};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if(arr[i][j]=='R') {
                r.push_back(make_pair(i,j));
                rg.push_back(make_pair(i,j));
            }
            else if(arr[i][j]=='G') {
                g.push_back(make_pair(i,j));
                rg.push_back(make_pair(i,j));
            }
            else b.push_back(make_pair(i,j));
        }
    }
    queue<pair<int, int>> q;
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    for(int i = 0; i < r.size(); i++) {
        int fir = r[i].first;
        int sec = r[i].second;
        if(visited[fir][sec]==0) {
            visited[fir][sec] = 1;
            q.push({fir, sec});
            while(!q.empty()) {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                for(int i = 0; i < 4; i++) {
                    int x2 = x + dx[i];
                    int y2 = y + dy[i];
                    
                    if(x2 < 0 || y2 < 0 || x2 >= n || y2 >= n) continue;
                    if(arr[x2][y2]=='G' || arr[x2][y2]=='B') continue;
                    if(visited[x2][y2]==1) continue;
                    visited[x2][y2] = 1;
                    q.push({x2, y2});
                }
            }
            Ccnt++;
        }
    }
    for(int i = 0; i < g.size(); i++) {
        int fir = g[i].first;
        int sec = g[i].second;
        if(visited[fir][sec]==0) {
            visited[fir][sec] = 1;
            q.push({fir, sec});
            while(!q.empty()) {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                for(int i = 0; i < 4; i++) {
                    int x2 = x + dx[i];
                    int y2 = y + dy[i];
                    
                    if(x2 < 0 || y2 < 0 || x2 >= n || y2 >= n) continue;
                    if(arr[x2][y2]=='R'||arr[x2][y2]=='B') continue;
                    if(visited[x2][y2]==1) continue;
                    visited[x2][y2] = 1;
                    q.push({x2, y2});
                }
            }
            Ccnt++;
        }
    }
    for(int i = 0; i < b.size(); i++) {
        int fir = b[i].first;
        int sec = b[i].second;
        if(visited[fir][sec]==0) {
            visited[fir][sec] = 1;
            q.push({fir, sec});
            while(!q.empty()) {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                for(int i = 0; i < 4; i++) {
                    int x2 = x + dx[i];
                    int y2 = y + dy[i];
                    
                    if(x2 < 0 || y2 < 0 || x2 >= n || y2 >= n) continue;
                    if(arr[x2][y2]=='R'||arr[x2][y2]=='G') continue;
                    if(visited[x2][y2]==1) continue;
                    visited[x2][y2] = 1;
                    q.push({x2, y2});
                }
            }
            Bcnt++;
        }
    }
    Ccnt += Bcnt;
    bool visited2[100][100]={false};
    for(int i = 0; i < rg.size(); i++) {
        int fir = rg[i].first;
        int sec = rg[i].second;
        if(visited2[fir][sec]==0) {
            visited2[fir][sec] = 1;
            q.push({fir, sec});
            while(!q.empty()) {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                for(int i = 0; i < 4; i++) {
                    int x2 = x + dx[i];
                    int y2 = y + dy[i];
                    
                    if(x2 < 0 || y2 < 0 || x2 >= n || y2 >= n) continue;
                    if(arr[x2][y2]=='B') continue;
                    if(visited2[x2][y2]==1) continue;
                    visited2[x2][y2] = 1;
                    q.push({x2, y2});
                }
            }
            RGcnt++;
        }
    }
    RGcnt += Bcnt;
    cout << Ccnt << " " << RGcnt;
    return 0;
}