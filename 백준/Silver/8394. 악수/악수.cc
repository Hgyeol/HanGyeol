#include <iostream>
using namespace std;
int main() {
    int fibo[10000001] ={0,1,2};
    int n;
    cin >> n;
    for(int i = 3; i <= n; i++) fibo[i] = (fibo[i-1] + fibo[i-2])%10;
    cout << fibo[n];
    return 0;
}