// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main() {
    int n, m, m_res=0, e_res=0, cnt;
    char arr[100][100];
    bool vis[100][100]={0};
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    queue<pair<int, int>> q;
    vector<pair<int,int>> t;
    vector<pair<int,int>> e;
    
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if(arr[i][j]=='W') t.push_back(make_pair(i,j));
            else e.push_back(make_pair(i,j));
        }
    }
    for(int i = 0; i < t.size(); i++) {
        int fir = t[i].first;
        int sec = t[i].second;
        if(vis[fir][sec]==0) {
            vis[fir][sec] = 1;
            q.push(make_pair(fir, sec));
            cnt = 1;
            while(!q.empty()) {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                for(int j = 0; j < 4; j++) {
                    int x2 = dx[j] + x;
                    int y2 = dy[j] + y;
                    if(x2 >= m || x2 < 0 || y2 >= n || y2 < 0) continue;
                    if(arr[x2][y2]=='B') continue;
                    if(vis[x2][y2]!=0) continue;
                    q.push(make_pair(x2,y2));
                    vis[x2][y2] = 1;
                    cnt++;
                }
            }
            m_res += cnt*cnt;
        } 
    }
    for(int i = 0; i < e.size(); i++) {
        int fir = e[i].first;
        int sec = e[i].second;
        if(vis[fir][sec]==0) {
            vis[fir][sec] = 1;
            q.push(make_pair(fir, sec));
            cnt=1;
            while(!q.empty()) {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                for(int j = 0; j < 4; j++) {
                    int x2 = dx[j] + x;
                    int y2 = dy[j] + y;
                    if(x2 >= m || x2 < 0 || y2 >= n || y2 < 0) continue;
                    if(arr[x2][y2]=='W') continue;
                    if(vis[x2][y2]!=0) continue;
                    q.push(make_pair(x2,y2));
                    vis[x2][y2] = 1;
                    cnt++;
                }
            }
            e_res += cnt*cnt;
        }
    }
    cout << m_res << " " << e_res;
    return 0;
}