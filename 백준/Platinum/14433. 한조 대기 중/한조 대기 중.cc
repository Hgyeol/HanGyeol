// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> v(301);
int sel[301];
bool vis[301];

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
int logic(int n, int m, int k) {
    int a, b, cnt=0;
    
    fill(sel, sel+301, -1);
    
    for(int i = 0; i < k; i++) {
        cin >> a >> b;
        v[a].push_back(b);
    }
    for(int i = 1; i <= n; i++) {
        fill(vis, vis + 301, false);
        bimatch(i);
    }
    for(int i = 1; i <= m; i++) {
        if(sel[i] != -1) cnt++;
    }
    return cnt;
}

int main() {
    int n, m, k1, k2, a, b, cnt1, cnt2;
    
    cin >> n >> m >> k1 >> k2;
    
    cnt1 = logic(n, m, k1);
    for(int i = 1; i <= n; i++) v[i].clear();
    cnt2 = logic(n, m, k2);
    //cout << cnt1 << " - " << cnt2 << "\n";
    if(cnt1 < cnt2) cout << "네 다음 힐딱이";
    else cout << "그만 알아보자";
    return 0;
}