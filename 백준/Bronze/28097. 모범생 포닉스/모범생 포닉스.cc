// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n, num, res=0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        res += num + 8;
    }
    res-=8;
    cout << res/24 << " " << res%24;
    return 0;
}