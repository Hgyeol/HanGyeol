#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int m = max(max(a,b),c);
    if(m == a) {
        if(a < (b+c)) cout << a+b+c;
        else cout << b+b+c+c-1;
    }
    else if(m == b) {
        if(b < (a+c)) cout << a+b+c;
        else cout << a+a+c+c-1;
    }
    else {
        if(c < (a+b)) cout << a+b+c;
        else cout << a+a+b+b-1;
    }
    return 0;
}
