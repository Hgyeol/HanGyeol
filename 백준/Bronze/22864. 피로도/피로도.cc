#include <iostream>
using namespace std;
int main() {
    int a,b,c,m, res=0, p=0;
    cin >> a >> b >> c >> m;
    for(int i = 0; i < 24; i++) {
        if(p+a <= m) {
            res += b;
            p += a;
        }
        else {
            p -= c;
            if(p < 0) p = 0;
        }
    }
    cout << res;
    return 0;
}
