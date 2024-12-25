// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unsigned long long int arr[1000001]={0};
    for(int i = 1; i <= 1000000; i++) {
        for(int j = 1; j*i <= 1000000; j++) {
            arr[i*j] += i;
        }
        arr[i] += arr[i-1];
    }
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << arr[n] << "\n";
    }
    return 0;
}