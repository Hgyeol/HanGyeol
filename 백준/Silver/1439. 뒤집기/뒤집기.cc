// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int cnt_0=0, cnt_1=0;
    char b=s[0];
    for(int i = 1; i < s.size(); i++) {
        if(b!=s[i]) {
            if(b=='0') cnt_0++;
            else cnt_1++;
            b=s[i];
        }
    }
    if(b=='0') cnt_0++;
    else cnt_1++;
    if(cnt_0 > cnt_1) cout << cnt_1;
    else cout << cnt_0;
    return 0;
}