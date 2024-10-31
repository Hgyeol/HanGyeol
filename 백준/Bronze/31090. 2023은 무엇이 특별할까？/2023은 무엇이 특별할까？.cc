#include <iostream>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        if((n+1)%(n%100)) cout << "Bye\n";
        else cout << "Good\n";
    }
    return 0;
}
