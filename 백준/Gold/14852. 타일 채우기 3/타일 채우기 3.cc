// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    long long int dp[1000001]={0,2,7};
    long long int dp2[1000001]={0,0,1};
    int n;
    cin >> n;
    for(int i = 3; i<=n; i++) {
        dp2[i] = (dp2[i-1]+dp[i-3])%1000000007;
        dp[i] = (dp[i-2]*3 + dp[i-1]*2 + dp2[i]*2)%1000000007;
    }
    cout << dp[n];
    return 0;
}