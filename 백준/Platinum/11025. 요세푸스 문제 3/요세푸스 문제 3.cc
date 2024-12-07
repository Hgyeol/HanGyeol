#include <iostream>
using namespace std;
int main() {
    int n,k,next=0;
    cin >> n >> k;
    for(int i = 1; i <= n; i++) next = ((next+k)%i);
    cout << next+1;
    return 0;
}