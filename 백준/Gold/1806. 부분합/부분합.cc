// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    unsigned long long int arr[100010] = {0};
    int n, s;
    cin >> n >> s;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    unsigned long long int start = 0; int end = 0, sum = 0, min = 100000;
    while(end <= n+1) {
        sum = arr[end] - arr[start];
        if(sum < s) {
            end++;
        }
        else {
            if(min > (end - start)) {
                min = end - start;
            }
            start++;
        }
    }
    if(min == 100000) cout << 0;
    else cout << min;
    return 0;
}