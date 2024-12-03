#include <iostream>
using namespace std;
int main() {
    int fibo[1000002]={0,1,1};
    int n;
    cin >> n;
    for(int i = 3; i<=n+1; i++) fibo[i] = (fibo[i-2]+fibo[i-1])% 15746;
    cout << fibo[n+1];
    return 0;
}
