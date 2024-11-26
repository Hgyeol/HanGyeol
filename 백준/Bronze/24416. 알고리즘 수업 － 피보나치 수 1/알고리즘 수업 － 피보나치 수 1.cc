// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int fibo[41]={0,1,1};
    for(int i = 3; i <= 40; i++) {
        fibo[i] = fibo[i-1]+fibo[i-2];
    }
    int n;
    cin >> n;
    cout << fibo[n] << " ";
    if(n <= 2) cout << 1;
    else cout << n-2;
    return 0;
}