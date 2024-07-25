// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,a,b;
    cin >> n;
    while(n--) {
        cin >> a >> b;
        cout << a+b << "\n";
    }

    return 0;
}