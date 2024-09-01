// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int h, m, s, h1, m1, s1;
    for(int i = 0; i < 3; i++) {
        cin >> h >> m >> s >> h1 >> m1 >> s1;
        if(s1-s < 0) {
            s1 = 60+s1-s;
            m1--;
        }
        else s1 = s1-s;
        if(m1-m < 0) {
            m1 = 60+m1-m;
            h1--;
        }
        else m1 = m1-m;
        h1 -= h;
        cout << h1 << " " << m1 << " " << s1 << "\n";
    }
    return 0;
}