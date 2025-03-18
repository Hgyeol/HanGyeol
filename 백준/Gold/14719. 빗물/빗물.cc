#include <iostream>
using namespace std;
int main() {
    int h, w;
    int arr[500];
    cin >> h >> w;
    for(int i = 0; i < w; i++) cin >> arr[i];
    int res=0;
    int lmx, rmx;
    for(int i = 1; i < w-1; i++) {
        lmx = rmx = 0;
        for(int j = 0; j <= i; j++) lmx = max(lmx, arr[j]);
        for(int j = i; j < w; j++) rmx = max(rmx, arr[j]);
        res += min(lmx, rmx) - arr[i];
    }
    cout << res;
    return 0;
}
