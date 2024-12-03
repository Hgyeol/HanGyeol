#include <iostream>
using namespace std;
int main() {
    
    int t,p,q;
    cin >> t;
    
    for(int i=1; i<=t; i++) {
        cin >> p >> q;
        long long int fibo[10001]={0,1,1};
        for(int i = 3; i <= p; i++) fibo[i] = (fibo[i-1]+fibo[i-2])%q;
        printf("Case #%d: %d\n", i, fibo[p]%q);
    }
    return 0;
}