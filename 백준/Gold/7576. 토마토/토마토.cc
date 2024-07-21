// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n, m, x, y, x2, y2, day, check=1;
    
    cin >> m >> n;
    
    int arr[1000][1000];
    int visited[1000][1000]={0};
    vector<pair<int, int>> v;
    queue<pair<int, int>> q;
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if(arr[i][j]==1) v.push_back(make_pair(i, j));
            else if(arr[i][j]==0) check = 0;
        }
    }
    if(check == 1) cout << "0";
    else {
        for(int i = 0; i < v.size(); i++) {
            q.push({v[i].first, v[i].second});
            visited[v[i].first][v[i].second] = 1;
        }
        
        while(!q.empty()) {
            x = q.front().first;
            y = q.front().second;
            q.pop();
            
            for(int i = 0; i<4; i++) {
                x2 = x + dx[i];
                y2 = y + dy[i];
                
                if(x2 < 0 || y2 < 0 || x2 >=n || y2 >= m) continue;
                if(arr[x2][y2]==-1) continue;
                if(visited[x2][y2]!=0) continue;
                arr[x2][y2] = 1;
                day = visited[x2][y2] = visited[x][y] + 1;
                q.push({x2, y2});
            }
        }
        // cout << "\n\n\n";
        // for(int i = 0; i < n; i++) {
        //     for(int j = 0; j < m; j++) {
        //         cout << arr[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(arr[i][j]==0) {
                    check = 1;
                    break;
                }
            }
            if(check==1) break;
        }
        if(check == 1) cout << "-1";
        else {
            int max = 0;
            for(int i = 0;  i< n; i++) {
                for(int j = 0; j < m; j++) {
                    if(max < visited[i][j]) max = visited[i][j];
                }
            }
            cout << max-1;
        }
    }
    
    
    return 0;
}