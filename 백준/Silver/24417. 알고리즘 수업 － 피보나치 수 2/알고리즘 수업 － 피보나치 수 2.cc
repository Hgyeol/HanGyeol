#include <iostream>
using namespace std;
int main() {
    // int fibo[200000001]={0,1,1};
    int n, num1=1,num2=1, res;
    cin >> n;
    for(int i = 3; i <= n; i++) {
        res = (num1+num2)%1000000007;
        if(i%2) num1 += num2;
        else num2+=num1;
        num1 %= 1000000007;
        num2 %= 1000000007;
    }
    cout << res << " " << n-2;
    return 0;
}