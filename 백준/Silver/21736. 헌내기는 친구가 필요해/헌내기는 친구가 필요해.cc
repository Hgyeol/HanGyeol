// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n, m, x, y, x2, y2, cnt=0;
    
    cin >> n >> m;
    
    char arr[600][600];
    int visited[600][600]={0};
    queue<pair<int, int>> q;
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 'I') {
                q.push({i,j});
                visited[i][j] = 1;
            }
        }
    }
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < m; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    while(!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        
        for(int i = 0; i<4; i++) {
            x2 = x + dx[i];
            y2 = y + dy[i];
            
            if(x2 < 0 || y2 < 0 || x2 >=n || y2 >= m) continue;
            if(arr[x2][y2]=='X') continue;
            if(visited[x2][y2]==1) continue;
            //cout << "x2 : " << x2 << " - y2 : " << y2 << "\n";
            if(arr[x2][y2]=='P') cnt++;
            visited[x2][y2] = 1;
            q.push({x2, y2});
        }
    }
    if(cnt == 0) cout << "TT";
    else cout << cnt;
    
    return 0;
}