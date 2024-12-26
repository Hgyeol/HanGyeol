#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    while(1) {
        cin >> a >> b >> c;
        if(cin.fail()) break;
        int cnt = 0;
        while(1) {
            if(a+1==b && b+1==c) break;
            if((b-a)<(c-b)) {
                a=b;
                b++;
            }
            else {
                c=b;
                b--;
            }
            cnt++;
        }
        cout << cnt << "\n";
    }
    
    return 0;
}
