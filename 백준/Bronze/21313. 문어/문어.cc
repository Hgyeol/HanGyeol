#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if(n%2) {
        for(int i = 0; i < n-1; i++) {
            if(i%2) cout << "2 ";
            else cout << "1 ";
        }
        cout<<"3";
    }
    else {
        for(int i = 0; i < n; i++) {
            if(i%2) cout << "2 ";
            else cout << "1 ";
        }
    }
    return 0;
}
