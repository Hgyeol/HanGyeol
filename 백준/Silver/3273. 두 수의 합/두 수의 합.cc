// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[100000] = {0};
    int n, x;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> x;
    sort(arr, arr+n);
    int start = 0, end = n-1, sum = 0, cnt = 0;
    
    while(start < end) {
        sum = arr[start] + arr[end];
        if(sum > x) {
            end --;
        }
        else if(sum < x) {
            start++;
        }
        else {
            cnt++;
            start++;
        }
    }
    cout << cnt;

    return 0;
}