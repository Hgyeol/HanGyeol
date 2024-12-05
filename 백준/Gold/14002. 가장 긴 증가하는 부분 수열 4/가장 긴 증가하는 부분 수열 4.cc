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
    int n;
    cin >> n;
    int index[1001] = {0};
    int arr[1001] = {0};
    int idx=0;
    vector<int> v, res;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        if(v.empty() || v[idx-1] < arr[i]) {
            v.push_back(arr[i]);
            index[i] = ++idx;
        }
        else {
            int b = bs(v, idx, arr[i]);
            v[b] = arr[i];
            index[i] = b+1;
        }
    }
    // for(int i = 1; i <= n; i++) cout << index[i] << " ";
    for(int i = n; i > 0; i--) {
        if(index[i] == idx) {
            res.push_back(arr[i]);
            idx--;
        }
    }
    cout << res.size() << "\n";
    for(int i = res.size()-1; i>-1; i--) cout << res[i] <<" ";
    // for(int i = n; i > 0; i--) {
    //     if(index[i] == idx) {
    //         res.push_back(arr[i]);
    //         idx--;
    //     }
    // }
    // cout << res.size();
    // for(int i = res.size()-1; i >= 0; i--) cout << res[i] << " ";
    return 0;
}