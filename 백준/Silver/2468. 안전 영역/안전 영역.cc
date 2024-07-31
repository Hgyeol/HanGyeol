// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    int n, min=100, max = 0, cnt=0, MAXcnt=1;
    cin >>n;
    int arr[n][n]={0};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if(arr[i][j] < min) min = arr[i][j];
            if(arr[i][j] > max) max = arr[i][j];
        }
    }
    for(int i = min; i <= max; i++) {
        vector<pair<int, int>> v;
        bool visited[100][100] = {false};
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                if(arr[j][k] > i) v.push_back(make_pair(j,k));
            }
        }
        cnt=0;
        queue<pair<int, int>> q;
        int dx[4] = {1,0,-1,0};
        int dy[4] = {0,1,0,-1};
        for(int m = 0; m < v.size(); m++) {
            int fir = v[m].first;
            int sec = v[m].second;
            if(visited[fir][sec]==0) {
                visited[fir][sec] = 1;
                q.push({fir, sec});
                while(!q.empty()) {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    for(int o = 0; o < 4; o++) {
                        int x2 = x + dx[o];
                        int y2 = y + dy[o];
                        
                        if(x2 < 0 || y2 < 0 || x2 >= n || y2 >= n) continue;
                        if(arr[x2][y2] <= i) continue;
                        if(visited[x2][y2]==1) continue;
                        visited[x2][y2] = 1;
                        q.push({x2, y2});
                    }
                }
                cnt++;
            }
        }
        if(MAXcnt < cnt) MAXcnt = cnt;
    }
    
    cout << MAXcnt;
    return 0;
}