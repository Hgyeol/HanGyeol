// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int pas(int a, int b) {
    if(a==1 || b==1 || a==b) {
        return 1;
    }
    else return pas(a-1, b) + pas(a-1,b-1);
}

int main() {
    int n, k;
    cin >> n >> k;
    
    cout << pas(n, k);
    
    return 0;
}