// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[20000] = {0};
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    int start = 0, end = 0, sum = 0, cnt = 0;
    
    while(end <= n) {
        if(sum < m) {
            sum += arr[end++];
        }
        else if(sum > m) {
            sum -= arr[start++];
        }
        else {
            cnt++;
            sum += arr[end++];
        }
    }
    cout << cnt;

    return 0;
}