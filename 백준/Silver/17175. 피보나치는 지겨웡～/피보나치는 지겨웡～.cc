#include <iostream>
using namespace std;
int main() {
    int fibo[51]={1,1,3};
    int n;
    cin >> n;
    for(int i = 3; i <= n; i++) fibo[i] = (fibo[i-1]+fibo[i-2]+1)%1000000007;
    cout << fibo[n];
    return 0;
}
