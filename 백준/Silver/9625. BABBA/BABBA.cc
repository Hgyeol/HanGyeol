// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int fibo[46]={0,1,1};
    for(int i = 3; i <= 45; i++) {
        fibo[i] = fibo[i-1]+fibo[i-2];
    }
    int n;
    cin >> n;
    cout << fibo[n-1] << " " << fibo[n];
    return 0;
}