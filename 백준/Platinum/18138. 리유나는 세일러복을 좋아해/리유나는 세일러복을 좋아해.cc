#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int sel[1001];
bool vis[1001];
vector<vector<int>> v(1001);

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
    int t[200];
    int k[200];
    int n, m, w, h;
    cin >> n >> m;
    fill(sel, sel+1001, -1);
    for(int i = 0; i < n; i++) cin >> t[i];
    for(int i = 0; i < m; i++) {
        cin >> k[i];
        for(int j = 0; j < n; j++) {
            if(((double)k[i]>=(double)t[j]*(0.5) && (double)k[i]<=(double)t[j]*(0.75)) ||
               (k[i]>=t[j] &&  (double)k[i]<=(double)t[j]*(1.25))) {
                v[i].push_back(j);
            }
        }
    }
    int cnt=0;
    for(int i = 0; i < m; i++) {
        fill(vis, vis+1001, false);
        if(bimatch(i)) cnt++;
    }
    cout << cnt;
    return 0;
}