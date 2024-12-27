#include <iostream>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, b=0, num, cnt=0;
    cin >> n;
    while(n--) {
        cin >> num;
        if(num >= b) cnt++;
        b = num;
    }
    cout << cnt;
    return 0;
}
