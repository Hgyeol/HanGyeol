// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    int cnt[501]={0};
    int time[501];
    int allTime[501]={0};
    int n, num, a;
    queue<int> q;    
    vector<int> v[501], cm[501];
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> time[i];
        while(1) {
            cin >> num;
            if(num == -1) break;
            cnt[i]++;
            v[num].push_back(i);
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
    for(int i = 1; i <= n; i++) cout << allTime[i] << "\n";
    return 0;
}