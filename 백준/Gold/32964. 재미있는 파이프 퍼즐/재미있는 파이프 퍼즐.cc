// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <tuple>
using namespace std;
int main() {
    int n;
    char arr[2][200002]={0};
    queue<tuple<int,int,int>> q;
    cin >> n;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    // 위 0, 아래 1, 왼 2
    q.push({0,1,2});
    if(arr[1][0]=='L') q.push({1,0,0});
    while(!q.empty()) {
        int x = get<0>(q.front());
        int y = get<1>(q.front());
        int b = get<2>(q.front());
        char c = arr[x][y];
        q.pop();
        if(c=='X') {
            cout << "YES";
            return 0;
        }
        if(c=='L') {
            if(x == 0) {
                if(b==1) q.push({x,y+1,2});
                else if(b==2 && (arr[x+1][y]=='L' || arr[x+1][y]=='X')) q.push({x+1,y,0});
            }
            else {
                if(b==0) q.push({x,y+1,2});
                else if(b==2 && (arr[x-1][y]=='L'||arr[x-1][y]=='X')) q.push({x-1,y,1});
            }
        }
        else if(c=='I') q.push({x,y+1,2});
    }
    cout << "NO";
    return 0;
}