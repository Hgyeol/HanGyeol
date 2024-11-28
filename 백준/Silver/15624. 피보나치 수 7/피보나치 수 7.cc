#include <iostream>

using namespace std;

int main() {
    int f[1000001]={0,1,1};
    int n;
    cin >> n;
    for(int i = 3; i <= n; i++) f[i] = (f[i-1] + f[i-2])%1000000007;
    cout << f[n];
    return 0;
}
