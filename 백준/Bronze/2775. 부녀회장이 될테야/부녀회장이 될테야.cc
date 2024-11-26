#include <iostream>

using namespace std;

int main() {
    
    int dp[15][15]={0};
    // for(int i = 1; i <= 14; i++) dp[0][i]=dp[0][i-1] + i;
    for(int i = 1; i <= 14; i++) dp[0][i]=i;
    for(int i = 1; i <= 14; i++) {
        for(int j = 1; j <= 14; j++) {
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    // for(int i = 0; i < 15; i++) {
        // for(int j = 0; j < 15; j++) {
            // printf("%d ", dp[i][j]);
        // }
        // cout<<"\n";
    // }
    int t, k, n;
    cin >> t;
    while(t--) {
        cin >> k >> n;
        cout << dp[k][n] << "\n";
    }
    return 0;
}
