#include <iostream>
using namespace std;
int main() {
    int n, h, cnt=0, num;
    cin >> n >> h;
    while(n--) {
        cin >> num;
        h-=num;
        cnt++;
        if(h <= 0) break;
    }
    if(h <= 0) cout << cnt;
    else cout << -1;
    return 0;
}
