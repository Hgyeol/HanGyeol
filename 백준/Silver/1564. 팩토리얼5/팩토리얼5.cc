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
    res%=100000;
    if(res >= 0 && res < 10) cout << "0000" << res;
    else if(res < 100) cout << "000" << res;
    else if(res < 1000) cout << "00" << res;
    else if(res < 10000) cout << "0" << res;
    else cout << res;
    return 0;
}