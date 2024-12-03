#include <iostream>
using namespace std;
int main() {
    int fuck[1001] = {0,1,3};
    int n;
    cin >> n;
    for(int i = 3; i <= n; i++) fuck[i] = (2*fuck[i-2] + fuck[i-1])%10007;
    cout << fuck[n];
    return 0;
}
