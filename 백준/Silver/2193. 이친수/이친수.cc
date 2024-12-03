#include <iostream>
using namespace std;
int main() {
    long long int fibo[91] ={0,1,1};
    int n;
    cin >> n;
    for(int i = 3; i <= n; i++) fibo[i] = fibo[i-1] + fibo[i-2];
    cout << fibo[n];
    return 0;
}
