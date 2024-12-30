#include <iostream>
using namespace std;
int main() {
    int n, v, sum=0, max=0;
    cin >> n;
    while(n--) {
        cin >> v;
        sum += v;
        if(max < v) max = v;
    }
    sum -= max;
    cout << sum;
    return 0;
}
