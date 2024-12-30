#include <iostream>
using namespace std;
int main() {
    string s;
    char c ='A';
    int cnt=0;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if((c=='A' && s[i]=='K')||(c=='K' && s[i]=='O')||(c=='O' && s[i]=='R')||(c=='R' && s[i]=='E')||(c=='E' && s[i]=='A')) {
            c = s[i];
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
