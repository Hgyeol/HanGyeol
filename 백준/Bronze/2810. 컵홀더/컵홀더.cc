#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    char s[51];
    cin >> s;
    int S=0,L=0;
    for(int i = 0; i < n; i++) {
        if(s[i]=='S') S++;
        else L++;
    }
    int res = (2*S + L) - (S + (L/2) - 1);
    if(res >= n) cout << n;
    else cout << res;
    return 0;
}