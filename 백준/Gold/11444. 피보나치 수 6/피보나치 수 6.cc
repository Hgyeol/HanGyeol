#include <iostream>

using namespace std;

void f(long long int a[2][2], long long int b[2][2], long long int MOD) {
    long long int res[2][2] = {
        {
            (a[0][0] * b[0][0] + a[0][1] * b[1][0])%MOD,
            (a[0][0] * b[0][1] + a[0][1] * b[1][1])%MOD,
        },
        {
            (a[1][0] * b[0][0] + a[1][1] * b[1][0])%MOD,
            (a[1][0] * b[0][1] + a[1][1] * b[1][1])%MOD
        }
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            a[i][j] = res[i][j];
        }
    }
}

int f_fibo(long long int n) {
    if(n <= 1) return n;
    long long int mod = 1000000007LL;
    long long int fibo[2][2] = {
        {1, 1},
        {1, 0}
    };
    
    long long int res[2][2] = {
        {1, 0},
        {0, 1}
    };
    
    while(n > 0) {
        if(n % 2) f(res, fibo, mod);
        f(fibo, fibo, mod);
        n /= 2;
    }
    
    return res[0][1];
}

int main() {
    long long int n;
    cin >> n;
    long long int res = f_fibo(n);
    cout << res;
    return 0;
}
