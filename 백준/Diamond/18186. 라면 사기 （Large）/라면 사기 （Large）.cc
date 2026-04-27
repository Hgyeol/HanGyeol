// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    long long int n, b, c;
    long long int arr[1000004] = {0};
    long long int mn;
    unsigned long long int res = 0;
    cin >> n >> b >> c;
    for(int i = 0; i < n; i++) cin >> arr[i];
    if (b <= c) {
        for (int i = 0; i < n; i++) {
            res += (unsigned long long)arr[i] * b;
        }
        cout << res;
        return 0;
    }
    for(int i = 0; i < n; i++) {
        while(arr[i] > 0) {
           if(arr[i+1] > 0 && arr[i+2] > 0) {
                if(arr[i+1] > arr[i+2]) {
                    mn = min(arr[i], arr[i+1] - arr[i+2]);
                    if(b*2 < (b + c)) res += ((b*2) * mn);
                    else res += ((b+c) * mn);
                    arr[i] -= mn;
                    arr[i+1] -= mn;
                }
                else { 
                    mn = min(arr[i], min(arr[i+1], arr[i+2]));
                    if(b*3 < (b + 2*c)) res += ((b * 3) * mn);
                    else res += ((b + 2*c) * mn);
                    arr[i] -= mn;
                    arr[i+1] -= mn;
                    arr[i+2] -= mn;
                }
            } 
            else if(arr[i+1] > 0) {
                mn = min(arr[i], arr[i+1]);
                if(b*2 < (b + c)) res += ((b * 2) * mn);
                else res += ((b + c) * mn);
                arr[i] -= mn;
                arr[i+1] -= mn;
            }
            else {
                res+= (b * arr[i]);
                arr[i] = 0;
            }
        }
    }
    cout << res;
    return 0;
}