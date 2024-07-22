// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n, num, max = 0;
    cin >> n;
    int dp[500][500] = {0};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cin >> num;
            if(i == 0) {
                dp[i][j] = num;
            }
            else {
                if(dp[i-1][j] + num > dp[i][j]) {
                    dp[i][j] = dp[i-1][j] + num;
                }
                if(j!=0 && dp[i-1][j-1] + num > dp[i][j]) {
                    dp[i][j] = dp[i-1][j-1] + num;
                }
            }
        }
        if(i == n-1) {
            for(int j = 0; j < n; j++) {
                if(max < dp[i][j]) max= dp[i][j];
            }
        }
    }
    cout << max;
    return 0;
}