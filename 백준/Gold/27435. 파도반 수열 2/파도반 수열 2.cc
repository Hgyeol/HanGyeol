#include <iostream>
#define MOD 998244353ULL
using namespace std;

void f(unsigned long long int a[3][3], unsigned long long int b[3][3]) {
    unsigned long long int res[3][3] = {0};

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                res[i][j] = (res[i][j] + a[i][k] * b[k][j]) % MOD;
            }
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            a[i][j] = res[i][j];
        }
    }
}

unsigned long long int f_padovan(unsigned long long int n) {
    if(n < 4) return 1;

    unsigned long long int padovan[3][3] = {
        {0, 1, 1},
        {1, 0, 0},
        {0, 1, 0}
    };

    unsigned long long int res[3][3] = {
        {1,0,0},
        {0,1,0},
        {0,0,1}
    };

    n -= 3;

    while(n > 0) {
        if(n % 2) f(res, padovan);
        f(padovan, padovan);
        n /= 2;
    }

    return (res[0][0] + res[0][1] + res[0][2]) % MOD;
}

int main() {
    unsigned long long int n, t;
    cin >> t;
    while(t--) {
        cin >> n;
        cout << f_padovan(n) << "\n";
    }
    return 0;
}