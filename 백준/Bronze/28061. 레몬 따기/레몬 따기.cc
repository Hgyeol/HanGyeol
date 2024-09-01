// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n, max=0, num;
    cin >> n;
    for(int i = n; i > 0; i--) {
        cin >> num;
        if(max < num-i) max = num-i;
    }
    cout << max;
    return 0;
}