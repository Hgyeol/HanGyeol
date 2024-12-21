// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int cnt[1001]={0};
        int time[1001];
        int allTime[1001]={0};
        int n, k, a, b, r;
        queue<int> q;    
        vector<int> v[1001], cm[1001];
        cin >> n >> k;
        for(int i = 1; i <= n; i++) cin >> time[i];
        for(int i = 0; i < k; i++) {
            cin >> a >> b;
            cnt[b]++;
            v[a].push_back(b);
        }
        cin >> r;
        for(int i = 1; i <= n; i++) {
            if(cnt[i]==0) q.push(i);
        }
        while(!q.empty()) {
            int f = q.front();
            q.pop();
            int sum=0, max=0;
            for(int i = 0; i < cm[f].size(); i++) if(max < cm[f][i]) max = cm[f][i];
            sum += max + time[f];
            allTime[f] = sum;
            for(int i = 0; i < v[f].size(); i++) {
                cnt[v[f][i]]--;
                cm[v[f][i]].push_back(sum);
                if(cnt[v[f][i]]==0) q.push(v[f][i]);
            }
        }
        cout << allTime[r] << "\n";
    }
    return 0;
}