#include <iostream>
using namespace std;
int main() {
    long long int n,m,res=0,num;
    cin >> n >> m;
    while(n--) {
        cin >> num;
        res += num;
    }
    while(m--) {
        cin >> num;
        if(num > 1) res *= num;
    }
    cout << res;
    return 0;
}
