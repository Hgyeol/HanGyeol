#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    unsigned long long int a, b, c;
    cin >> a >> b >> c;
    long double n =  max((double)a*b/c, (double)a/b*c);
    cout << (unsigned long long int) n;
    return 0;
}
