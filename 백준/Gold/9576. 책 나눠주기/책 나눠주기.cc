// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int sel[1001];
bool vis[1001];
vector<vector<int>> v(1001);
bool duck;
bool bimatch(int n) {
    if(vis[n]) return false;
    
    vis[n] = true;
    
    for(int i = 0; i < v[n].size(); i++) {
        int num = v[n][i];
        if(sel[num]==-1 || bimatch(sel[num])) {
            sel[num] = n;
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, a, b, cnt=0;
        cin >> n >> m;
        for(int i = 1; i <= 1000; i++) {
            v[i].clear();
        }
        fill(sel, sel+1001, -1);
        for(int i = 1; i <= m; i++) {
            cin >> a >> b;
            for(int j = a; j <= b; j++) {
                v[i].push_back(j);
            }
        }
        for(int i = 1; i <= m; i++) {
            fill(vis, vis + 1001, false);
            duck = bimatch(i);
        }
        for(int i = 1; i <= 1000; i++) {
            if(sel[i] != -1) cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}