// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    bool p[1000000] = {1,1,0};
    int n;
    cin >> n;
    int mx = stoi(to_string(n)+to_string(n));
    for(int i = 2; i*i <= mx; i++) {
        if(!p[i]) {
            for(int j = i+i; j <= mx; j+=i) {
                p[j] = true;
            }
        }
    }
    bool cases[1000][1000] = {0};
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cases[i][j] = p[stoi(to_string(i)+to_string(j))];
        }
    }
    // for(int i = 0; i <= n; i++) {
    //     for(int j = 0; j <= n; j++) {
    //         cout << cases[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    int dp[1000][1000] = {0};
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + !cases[i][j];
        }
    }
    // for(int i = 0; i <= n; i++) {
    //     for(int j = 0; j <= n; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    cout << dp[n][n]-1;
    return 0;
}