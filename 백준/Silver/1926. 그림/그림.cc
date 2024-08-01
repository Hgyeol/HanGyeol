// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    
    int n, m, res=0, cnt=0, max=0, c=0;
    
    cin >> n >> m;
    
    int arr[500][500]={0};
    int visited[500][500]={0};
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if(arr[i][j]) {
                v.push_back(make_pair(i,j));
            }
        }
    }
    for(int i = 0; i < v.size(); i++) {
        int fir = v[i].first;
        int sec = v[i].second;
        
        if(visited[fir][sec]==0) {
            visited[fir][sec]=1;
            queue<pair<int,int>> q;
            q.push({fir, sec});
            c=1;
            while(!q.empty()) {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                //cout << "x : " << x << " --- y : " << y << "\n";
                for(int i = 0; i < 4; i++) {
                    int x2 = x + dx[i];
                    int y2 = y + dy[i];
                    
                    if(x2 < 0 || y2 < 0 || x2 >= n || y2 >= m) continue;
                    if(arr[x2][y2]==0) continue;
                    if(visited[x2][y2]!=0) continue;
                    visited[x2][y2] = visited[x][y]+1;
                    //cout << visited[x2][y2] << "\n";
                    if(max < visited[x2][y2]) max = visited[x2][y2];
                    q.push({x2,y2});
                    c++;
                }
            }
            if(max < c) max = c;
            cnt++;
        }
    }
    cout << cnt << "\n" << max;

    return 0;
}