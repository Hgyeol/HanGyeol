// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[2000]={0};
    int n, l, r, num, c, cnt=0;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    r = n-1;
    sort(arr, arr+n);
    for(int i = 0; i < n; i++) {
        c=0;
        l = 0;
        r = n-1;
        while(l < r) {
            if(l==i) {
                l++;
                continue;
            }
            if(r==i) {
                r--;
                continue;
            }
            num = arr[l] + arr[r];
            if(num > arr[i]) r--;
            else if(num < arr[i]) l++;
            else {
                c=1;
                break;
            }
        }
        if(c) cnt++;
    }
    
    cout << cnt;
    return 0;
}