// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> v(201);
int sel[201];
bool vis[201];

bool bimatch(int n) {
    if(vis[n]) return false;
    
    vis[n] = true;
    
    for(int i = 0; i < v[n].size(); i++) {
        int num = v[n][i];
        if(sel[num] == -1 || bimatch(sel[num])) {
            sel[num] = n;
            return true;
        }
    }
    return false;
}

int main() {
    int n, m, s, num, cnt=0;
    cin >> n >> m;
    fill(sel, sel+201, -1);
    for(int i = 1; i <= n; i++) {
        cin >> s;
        while(s--) {
            cin >> num;
            v[i].push_back(num);
        }
    }
    for(int i = 1; i <= n; i++) {
        fill(vis, vis + 201, false);
        bool duck = bimatch(i);
    }
    for(int i = 1; i <= m; i++) {
        if(sel[i]!=-1) cnt++;
    }
    cout << cnt;
    return 0;
}