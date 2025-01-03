#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n,l,k, num1, num2;
    vector<int> v;
    cin >> n >> l >> k;
    for(int i = 0; i < n; i++) {
        cin >> num1 >> num2;
        if(num2<=l) v.push_back(2);
        else if(num1<=l) v.push_back(1);
    }
    sort(v.rbegin(), v.rend());
    if(k==0) cout << 0;
    else {
        int res=0;
        for(int i = 0; i < v.size(); i++) {
            if(v[i]==2) res += 140;
            else res += 100;
            if(i==k-1) break;
        }
        cout << res;
    }
    return 0;
}
