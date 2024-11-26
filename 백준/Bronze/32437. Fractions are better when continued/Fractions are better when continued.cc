// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int fibo[40]={0,1,2};
    for(int i = 3; i <= 40; i++) {
        fibo[i] = fibo[i-1]+fibo[i-2];
    }
    int n;
    cin >> n;
    cout << fibo[n];
    return 0;
}