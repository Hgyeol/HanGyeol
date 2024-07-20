// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n, m, x, y, x2, y2;
    
    cin >> n >> m;
    
    int arr[n][m];
    int visited[100][100]={0};
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%1d", &arr[i][j]);
        }
    }
    visited[0][0] = 1;
    
    queue<pair<int, int>> q;
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    
    q.push({0,0});
    
    while(!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        
        for(int i = 0; i<4; i++) {
            x2 = x + dx[i];
            y2 = y + dy[i];
            
            if(x2 < 0 || y2 < 0 || x2 >=n || y2 >= m) continue;
            if(arr[x2][y2]==0) continue;
            if(visited[x2][y2]!=0) continue;
            
            visited[x2][y2] = visited[x][y] + 1;
            q.push({x2, y2});
        }
    }
    
    cout << visited[n-1][m-1];
    
    return 0;
}