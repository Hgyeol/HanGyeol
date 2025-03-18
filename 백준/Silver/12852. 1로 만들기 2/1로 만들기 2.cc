#include <iostream>
#include<vector>
int arr[1000001] = {0};
using namespace std;
int main() {
    int n;
    cin >> n;
    if(n==1) cout << "0\n1";
    else {
        for (int i = 2; i <= n; i++) {
            arr[i] = arr[i - 1] + 1;
            if (i % 3 == 0)
                arr[i] = arr[i] > arr[i/3]+1 ? arr[i/3]+1 : arr[i];
            if (i % 2 == 0)
                arr[i] = arr[i] > arr[i/2]+1 ? arr[i/2] + 1 : arr[i];
        }
        vector<int> v;
        v.push_back(n);
        while(n != 1) {
            if(n % 3 == 0) {
                if(arr[n]-1 == arr[n/3]) {
                    n /= 3;
                    v.push_back(n);
                    continue;
                }
            }
            if(n % 2 == 0) {
                if(arr[n]-1 == arr[n/2]) {
                    n /= 2;
                    v.push_back(n);
                    continue;
                }
            }
            v.push_back(n-1);
            n-=1;
        }
        cout << v.size()-1 << "\n";
        for(int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
    }
	return 0;
}