// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int fibo[46]={1,1};
    for(int i = 2; i <= 45; i++) {
        fibo[i] = fibo[i-1]+fibo[i-2];
    }
    int t,n;
    cin >> t;
    while(t--) {
        cin >> n;
        cout << fibo[n] << "\n";
    }
    return 0;
}