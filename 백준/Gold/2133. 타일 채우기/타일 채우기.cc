// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int dp[31]={1,3};
    int n;
    cin >> n;
    if(n%2) cout <<"0";
    else {
        n /= 2;
        for(int i = 2; i<=n; i++) {
            dp[i] = dp[i-1]*3;
            for(int j = 2; j<=i; j++) dp[i] += 2*dp[i-j];
        }
        cout << dp[n];
    }
    return 0;
}