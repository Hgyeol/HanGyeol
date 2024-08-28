// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    long long int n;
    int m = 1000000;
    int p = m/10 * 15;
    int fibo[p]={0,1};
    cin >> n;
    for(int i = 2; i < p; i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
        fibo[i] %= m;
    }
    cout << fibo[n%p];
    return 0;
}