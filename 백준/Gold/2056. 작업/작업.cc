// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    int cnt[10001]={0};
    int time[10001];
    int allTime[10001]={0};
    int n, t, a, r;
    queue<int> q;    
    vector<int> v[10001], cm[10001];
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> time[i];
        cin >> t;
        while(t--) {
            cin >> a;
            cnt[a]++;
            v[i].push_back(a);
        }
        
    }
    for(int i = 1; i <= n; i++) {
        if(cnt[i]==0) q.push(i);
    }
    while(!q.empty()) {
        int f = q.front();
        q.pop();
        int sum=0, max=0;
        for(int i = 0; i < cm[f].size(); i++) if(max < cm[f][i]) max = cm[f][i];
        sum += max + time[f];
        // cout << "f : " << f << " - sum : " << sum << "\n";
        allTime[f] = sum;
        for(int i = 0; i < v[f].size(); i++) {
            cnt[v[f][i]]--;
            cm[v[f][i]].push_back(sum);
            if(cnt[v[f][i]]==0) q.push(v[f][i]);
        }
    }
    int max = 0;
    for(int i = 1; i <= n; i++) {
        // cout << allTime[i] << " " << time[i] << "\n";
        if(max < allTime[i]) max = allTime[i];
    }
    cout << max;
    return 0;
}