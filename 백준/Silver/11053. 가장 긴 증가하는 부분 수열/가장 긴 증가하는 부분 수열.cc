// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n, max, res=0;
    cin >> n;
    int arr[n+1] = {0};
    int dp[n+1] = {0};
    for(int i = 1; i <= n; i++) cin >> arr[i];
    
    for(int i = 1; i <= n; i++) {
        max=-1;
        for(int j = 0; j < i; j++) {
            if(arr[i] > arr[j]) {
                if(max < dp[j]) {
                    max = dp[j];
                    dp[i] = dp[j] + 1;
                }
            }
        }
    }
    for(int i = 0; i <= n; i++) {
        if(res < dp[i]) res = dp[i];
    }
    cout << res;
    return 0;
}