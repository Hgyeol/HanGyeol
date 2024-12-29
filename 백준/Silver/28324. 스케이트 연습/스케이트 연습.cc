// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    int arr[500000];
    long long int res=1;
    cin >> n;
    int h=2;
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = n-2; i > -1; i--) {
        if(i==0) {
            if(arr[i] < h) res += arr[i];
            else res += h;
            break;
        }
        if(arr[i] < h) {
            res += arr[i];
            h = arr[i]+1;
        }
        else res += h++;
    }
    cout << res;
    return 0;
}