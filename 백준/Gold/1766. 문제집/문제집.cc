// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    int cnt[32001]={0};
    int n, m, a, b;
    priority_queue<int, vector<int>, greater<int>> q;    
    vector<int> v[32001], res;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        cnt[b]++;
        v[a].push_back(b);
    }
    for(int i = 1; i <= n; i++) {
        if(cnt[i]==0) q.push(i);
    }
    while(!q.empty()) {
        int f = q.top();
        q.pop();
        res.push_back(f);
        for(int i = 0; i < v[f].size(); i++) {
            cnt[v[f][i]]--;
            if(cnt[v[f][i]]==0) q.push(v[f][i]);
        }
    }
    for(int i = 0; i < res.size(); i++) cout << res[i] << " ";
    return 0;
}