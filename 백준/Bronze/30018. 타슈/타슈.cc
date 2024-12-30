#include <iostream>
using namespace std;
int main() {
    int n, cnt=0, num;
    int a[100];
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) {
        cin >> num;
        if(a[i]-num > 0) cnt += a[i]-num;
    }
    cout << cnt;
    return 0;
}
