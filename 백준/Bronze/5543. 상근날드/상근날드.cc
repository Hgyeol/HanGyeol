#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int h1, h2, h3, d1, d2;
    cin >> h1 >> h2 >> h3 >> d1 >> d2;
    int res = min(min(h1,h2),h3);
    res += min(d1, d2);
    cout << res-50;
    return 0;
}
