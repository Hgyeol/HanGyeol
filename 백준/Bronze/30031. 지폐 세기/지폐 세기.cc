#include <iostream>
using namespace std;
int main() {
    int res = 0;
    int n, c, w;
    cin >> n;
    while(n--) {
        cin >> c >> w;
        switch(c) {
            case 136: 
                res += 1000; 
                break;
            case 142: 
                res += 5000; 
                break;
            case 148: 
                res += 10000; 
                break;
            case 154: 
                res += 50000; 
                break;
        }
    }
    cout << res;
    return 0;
}
