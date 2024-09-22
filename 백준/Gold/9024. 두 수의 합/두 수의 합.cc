#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,k,r,l,r2,l2,cnt,min,abs;
    cin >> t;
    while(t--) {
        cnt=1;
        min = 200000000;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        sort(arr, arr+n);
        l=0;
        r=n-1;
        while(l < r) {
            abs = (k-(arr[l]+arr[r])) < 0 ? -1 * (k-(arr[l]+arr[r])) : (k-(arr[l]+arr[r]));
            if(min > abs) {
                min = abs;
                cnt=1;
            }
            else if (min == abs) cnt++;
            
            if(arr[l]+arr[r] - k > 0) {
                r--;
            }
            else {
                l++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
