// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[100011]={0};
    int n, l = 0, r, fir, sec, num, abs, min = 200000001;
    cin >> n;
    r = n-1;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    while(l < r) {
        num = arr[l] + arr[r];
        abs = num < 0 ? -1 * num : num;
        if(min > abs) {
            min = abs;
            fir = l;
            sec = r;
        }
        
        if(num > 0) r--;
        else if(num < 0) l++;
        else {
            fir = l;
            sec = r;
            break;
        }
    }
    cout << arr[fir]+arr[sec];
    return 0;
}