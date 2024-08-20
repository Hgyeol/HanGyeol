// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, num, idx;
    long long int sum = 0, x = 0;
    cin >> n;
    while(n--) {
        cin >> num;
        if(num == 1) {
            cin >> idx;
            sum += idx;
            x ^= idx;
        }
        else if(num == 2) {
            cin >> idx;
            sum -= idx;
            x ^= idx;
        }
        else if(num == 3) {
            cout << sum << "\n";
        }
        else if(num == 4) {
            cout << x << "\n";
        }
     }
    return 0;
}