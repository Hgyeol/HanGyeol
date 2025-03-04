#include <iostream>
#include <map>
using namespace std;
int main() {
    bool cnt[1000001] = {0};
    int n, res=0;
    int a, b, c;
    cin >> n;
    while(n--) {
        cin >> a >> b >> c;
        if(cnt[a] || cnt[b] || cnt[c]) {
            res = 1;
        }
        cnt[a] = cnt[b] = cnt[c] = 1;
    }
    cout << res;
    return 0;
}