// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n, num, cnt=0;
    cin >> n;
    for(int i = 0; i < 5; i++) {
        cin >> num;
        if(num%10==n) cnt++;
    }
    cout << cnt;
    return 0;
}