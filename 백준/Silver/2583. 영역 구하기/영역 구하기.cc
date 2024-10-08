// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    int n, m, k, cnt, fx1, fx2, fy1, fy2;
    int arr[100][100]={0};
    bool vis[100][100]={0};
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    queue<pair<int, int>> q;
    vector<pair<int,int>> v;
    vector<int> res;
    
    cin >> n >> m >> k;
    for(int i = 0; i < k; i++) {
        cin >> fx1 >> fy1 >> fx2 >> fy2;
        for(int j = fx1; j < fx2; j++) {
            for(int o = fy1; o < fy2; o++) {
                arr[j][o] = 1;
            }
        }
    }
    // for(int i = 0; i < m; i++) {
    //     for(int j = 0; j < n; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j]==0) {
                v.push_back(make_pair(i,j));
            }
        }
    }
    for(int i = 0; i < v.size(); i++) {
        int fir = v[i].first;
        int sec = v[i].second;
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
                    if(arr[x2][y2]==1) continue;
                    if(vis[x2][y2]!=0) continue;
                    q.push(make_pair(x2,y2));
                    vis[x2][y2] = 1;
                    cnt++;
                }
            }
            res.push_back(cnt);
        } 
    }
    sort(res.begin(), res.end());
    cout << res.size() << "\n";
    for(int i = 0; i < res.size(); i++) cout << res[i] << " ";
    return 0;
}