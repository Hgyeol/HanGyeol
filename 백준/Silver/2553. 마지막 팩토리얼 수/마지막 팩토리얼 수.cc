// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long int res = 1;
    for(int i = 1; i <= n; i++) {
        res *= i;
        while(res%10 == 0) {
            res /= 10;
        }
        res %= 1000000000000;
    }
    res%=10;
    cout << res;
    return 0;
}