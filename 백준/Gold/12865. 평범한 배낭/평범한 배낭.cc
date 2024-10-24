// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    
    int n, k;
    cin >> n >> k;
    int dp[101][100001]={0};
    int weight[101];
    int value[101];
    for(int i = 1; i <= n; i++) cin >> weight[i] >> value[i];
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= k; j++) {
            if(weight[i] > j) dp[i][j] = dp[i-1][j];
            else {
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-weight[i]] + value[i]);
            }
        }
    }
    // for(int i = 0; i <= n; i++, puts("")) {
    //     for(int j = 0; j <= k; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    // }
    cout << dp[n][k];
    return 0;
}