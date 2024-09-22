#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n, num, idx, c;
    int arr[500000];
    cin >> n;
    stack<pair<int,int>> s;
    for(int i = 0; i < n; i++) cin >> arr[i];
    s.push(make_pair(arr[0], 1));
    cout << "0 ";
    for(int i = 1; i < n; i++) {
        c=1;
        while(!s.empty()) {
            num = s.top().first;
            idx = s.top().second;
            s.pop();
            if(num > arr[i]) {
                cout << idx << " ";
                s.push(make_pair(num, idx));
                s.push(make_pair(arr[i], i+1));
                c=0;
                break;
            }
        }
        if(c) {
            cout << "0 ";
            s.push(make_pair(arr[i], i+1));
        }
    }
    return 0;
}
