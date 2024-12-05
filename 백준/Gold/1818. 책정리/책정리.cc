#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int bs(int* dp, int n, int f) {
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
    int dp[200001] = {0};
    int idx=0;
    for(int i = 1; i <= n; i++) {
        cin >> num;
        if(idx==0) dp[idx++]=num;
        if(dp[idx-1] < num) dp[idx++] = num;
        else dp[bs(dp, idx, num)] = num;
    }
    cout << n-idx;
    return 0;
}