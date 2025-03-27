#include <iostream>
#define MOD 1000000007ULL
using namespace std;

void f(unsigned long long int a[2][2], unsigned long long int b[2][2]) {
    unsigned long long int res[2][2] = {
        {
            (a[0][0] * b[0][0] + a[0][1] * b[1][0])%MOD,
            (a[0][0] * b[0][1] + a[0][1] * b[1][1])%MOD
        },
        {
            (a[1][0] * b[0][0] + a[1][1] * b[1][0])%MOD,
            (a[1][0] * b[0][1] + a[1][1] * b[1][1])%MOD
        }
    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            a[i][j]=res[i][j];
        }
    }
}

unsigned long long int f_fibo(unsigned long long int n) {
    if(n <= 1) return n;
    
    unsigned long long int fibo[2][2] = {
        {1,1},
        {1,0}
    };

    unsigned long long int res[2][2] = {
        {1,0},
        {0,1}
    };

    while(n > 0) {
        if(n%2) f(res, fibo);
        f(fibo, fibo);
        n /= 2;
    }
    return res[0][1];
}

int main() {
    unsigned long long int n, m;
    cin >> n >> m;
    unsigned long long int c;
    while(n % m != 0) {
        c = m;
        m = n%m;
        n = c;
    }
    m = f_fibo(m);
    
    cout << m%MOD;
    return 0;
}