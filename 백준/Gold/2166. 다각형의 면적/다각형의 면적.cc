#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    long double x[10000]={0};
    long double y[10000]={0};
    long double res = 0;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i];

    for(int i = 0; i < n; i++) {
        if(i==n-1) res += x[i]*y[0];
        else res += x[i] * y[i+1];
    }

    for(int i = 1; i <= n; i++) {
        if(i==n) res -= x[0]*y[n-1];
        else res -= x[i] * y[i-1];
    }
    res = fabs(res);
    res /= 2;
    res = round(res*10)/10;
    printf("%.1Lf", res);
    return 0;
}