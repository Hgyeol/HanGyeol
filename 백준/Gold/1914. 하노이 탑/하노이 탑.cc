// Online C compiler to run C program online
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void Hanoi(int n, int A, int B, int C) {
    if(n==1) {
        cout << A << " " << C << "\n";
    }
    else {
        Hanoi(n-1, A, C, B);
        cout << A << " " << C << "\n";
        Hanoi(n-1, B, A, C);
    }
}

int main() {
    int n;
    cin >> n;
    string res;
    res = to_string(pow(2, n));
    res = res.substr(0, res.find('.'));
    res[res.size() - 1] -= 1;
    
    cout << res << "\n";
    if(n<= 20) Hanoi(n, 1, 2, 3);
    return 0;
}