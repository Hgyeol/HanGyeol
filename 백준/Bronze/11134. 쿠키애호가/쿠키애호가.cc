// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, c;
        cin >> a >> c;
        if(((double)a/c) > a/c) cout << a/c+1 << "\n";
        else cout << a/c << "\n";
    }
    return 0;
}