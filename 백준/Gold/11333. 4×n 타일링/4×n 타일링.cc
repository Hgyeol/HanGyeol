#include <iostream>
using namespace std;
int main() {
    int t,n,k;
    long long int arr[3334]={0,3,13};
    for(int i = 3; i <= 3333; i++) {
        arr[i] = (arr[i-1]*3)%1000000007;
        k=4;
        for(int j = i-2 ; j>0; j--) {
            arr[i] = (arr[i]+k*arr[j])%1000000007;
            k+=2;
        }
        arr[i] = (arr[i]+k)%1000000007;
    }
    cin >> t;
    while(t--) {
        cin >> n;
        if(n%3) cout << "0\n";
        else cout << arr[n/3] << "\n";
    }
    return 0;
}