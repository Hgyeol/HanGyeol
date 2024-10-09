// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool sosu(int n) {
    if(n==1) return false;
    for(int i = 2; i < n; i++) {
        if(n%i==0) return false;
    }
    return true;
}

void c(int n, int cnt) {
    if(cnt == 0) cout << n << "\n";
    
    for(int i = 1; i < 10; i+=2) {
        int num = n*10+i;
        if(sosu(num)) {
            c(num, cnt-1);
        }
    }
    
}

int main() {
    int n;
    int s[4] = {2,3,5,7};
    cin >> n;
    for(int i = 0; i < 4; i++) {
        c(s[i], n-1);
    }
    return 0;
}