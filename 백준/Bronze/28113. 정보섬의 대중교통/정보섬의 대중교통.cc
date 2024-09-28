// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n, b, s;
    cin >> n >> b >> s;
    if(b < s) cout << "Bus";
    else if(b > s) cout << "Subway";
    else cout << "Anything";
    return 0;
}