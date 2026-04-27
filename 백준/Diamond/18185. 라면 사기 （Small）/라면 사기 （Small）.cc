// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    int arr[10003] = {0};
    int mn;
    long long int res = 0;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    for(int i = 0; i < n; i++) {
        while(arr[i] > 0) {
           if(arr[i+1] > 0 && arr[i+2] > 0) {
                if(arr[i+1] > arr[i+2]) {
                    mn = min(arr[i], arr[i+1] - arr[i+2]);
                    res += (5 * mn);
                    arr[i] -= mn;
                    arr[i+1] -= mn;
                }
                else { 
                    mn = min(arr[i], min(arr[i+1], arr[i+2]));
                    res += (7 * mn);
                    arr[i] -= mn;
                    arr[i+1] -= mn;
                    arr[i+2] -= mn;
                }
            } 
            else if(arr[i+1] > 0) {
                mn = min(arr[i], arr[i+1]);
                res += (5 * mn);
                arr[i] -= mn;
                arr[i+1] -= mn;
            }
            else {
                res+= (3 * arr[i]);
                arr[i] = 0;
            }
        }
    }
    cout << res;
    return 0;
}