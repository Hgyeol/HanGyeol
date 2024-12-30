#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, m, cnt=0;
    int arr[1000][2];
    vector<int> v;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> arr[i][0] >> arr[i][1];
        if(arr[i][0] >= arr[i][1]) cnt++;
        else {
            v.push_back(arr[i][1]-n);
        }
    }
    if(cnt >= m-1) {
        cout << 0;
        return 0;
    }
    sort(v.begin(), v.end());
    // for(int i = 0; i < v.size(); i++) cout << v[i] << " ";
    // cout <<"\n\n";
    int res=0;
    int idx=0;
    while(cnt != m-1) {
        res += v[idx++];
        cnt++;
    }
    cout << res;
    return 0;
}