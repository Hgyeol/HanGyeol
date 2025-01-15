// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    vector<int> v[101];
    queue<pair<int,int>> q;
    int n, m, a,b,x,y;
    cin >> n;
    cin >> a >> b;
    cin >> m;
    bool vis[101]={0};
    while(m--) {
        cin >> x >> y;
        v[y].push_back(x);
        v[x].push_back(y);
    }
    
    q.push({a,0});
    int res = -1;
    while(!q.empty()) {
        int f = q.front().first;
        int s = q.front().second;
        if(f==b) {
            res = s;
            break;
        }
        vis[f] = true;
        q.pop();
        for(int i = 0; i < v[f].size(); i++) {
            if(vis[v[f][i]]==false) q.push({v[f][i],s+1});
        }
    }
    cout << res;
    return 0;
}