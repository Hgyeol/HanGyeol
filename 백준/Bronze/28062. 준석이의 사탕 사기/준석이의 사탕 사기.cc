#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, res=0, num;
    vector<int> odd;
    cin >> n;
    while(n--) {
        cin >> num;
        if(num%2) odd.push_back(num);
        res+=num;
    }
    if(odd.size()==1 && n==1) cout << 0;
    else {
        if(odd.size()%2) {
            sort(odd.begin(), odd.end());
            cout << res-odd.front();
        }
        else cout << res;
    }
    return 0;
}
