#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int bs(vector<int>& dp, int n, int f) {
    int s = 0;
    int e = n - 1;
    while (s < e) {
        int mid = (s + e) / 2;
        if (f <= dp[mid]) e = mid;
        else s = mid + 1;
    }
    return s;
}
int main() {
    int n, num;
    cin >> n;
    int index[10001] = {0};
    int arr[10001] = {0};
    int arr2[10001] = {0};
    int cnt[10001] = {0};
    // vector<pair<int,int>> arr;
    int idx=0;
    vector<int> v, res;
    for(int i = 1; i <= n; i++) cin>>arr[i];
    for(int i = 1; i <= n; i++) {
        cin >> arr2[i];
        cnt[arr2[i]]=i;
    }
    for(int i = 1; i <= n; i++) {
        if(v.empty() || v[idx-1] < cnt[arr[i]]) {
            v.push_back(cnt[arr[i]]);
            index[i] = ++idx;
        }
        else {
            int b = bs(v, idx, cnt[arr[i]]);
            v[b] = cnt[arr[i]];
            index[i] = b+1;
        }
    }
    for(int i = n; i > 0; i--) {
        if(index[i] == idx) {
            res.push_back(arr[i]);
            idx--;
        }
    }
    sort(res.begin(), res.end());
    cout << res.size() << "\n";
    for(int i = 0; i<res.size(); i++) cout << res[i] <<" ";
    return 0;
}