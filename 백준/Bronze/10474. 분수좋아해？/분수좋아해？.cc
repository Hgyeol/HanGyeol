// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    long long int a,b;
    while(1) {
        cin >> a >> b;
        if(a==0 && b==0) break;
        cout << a/b << " " << a%b << " / " << b << "\n";
    }
    return 0;
}