#include <iostream>
using namespace std;
int main() {
    int n, cnt=0, num, b=2;
    cin >> n;
    while(n--) {
        cin >> num;
        if((b==0 && num==1) || (b==1 && num == 2) || (b==2 && num==0)) {
            cnt++;
            b = num;
        }
    }
    cout << cnt;
    return 0;
}
