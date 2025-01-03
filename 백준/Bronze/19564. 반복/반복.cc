#include <iostream>
using namespace std;
int main() {
    string s;
    int cnt=0;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        for(int j = s[i]+1; j <= 123; j++) {
            if(s[i+1]==j) i++;
        }
        cnt++;
    }
    cout << cnt;
    return 0;
}
