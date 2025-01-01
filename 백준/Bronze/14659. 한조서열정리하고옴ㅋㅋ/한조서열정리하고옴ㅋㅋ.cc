#include <iostream>
using namespace std;
int main() {
    int arr[30000];
    int n, cnt, max=0;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++) {
        cnt=0;
        for(int j = i+1; j < n; j++) {
            if(arr[i] < arr[j]) break;
            cnt++;
        }
        if(max < cnt) max = cnt;
    }
    cout << max;
    return 0;
}
