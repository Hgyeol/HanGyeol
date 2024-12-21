// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    int cnt[1001]={0};
    int n, m, a, b, num;
    queue<int> q;    
    vector<int> v[1001], res;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> num;
        cin >> a;
        num--;
        while(num--) {
            cin >> b;
            cnt[b]++;
            v[a].push_back(b);
            a=b;
        }
    }
    for(int i = 1; i <= n; i++) {
        if(cnt[i]==0) q.push(i);
    }
    int cnt2=0;
    while(!q.empty()) {
        cnt2++;
        int f = q.front();
        q.pop();
        res.push_back(f);
        for(int i = 0; i < v[f].size(); i++) {
            cnt[v[f][i]]--;
            if(cnt[v[f][i]]==0) {
                q.push(v[f][i]);
            }
        }
    }
    if(cnt2!=n) cout << "0";
    else {
        for(int i = 0; i < res.size(); i++) cout << res[i] << "\n";
    }
    return 0;
}