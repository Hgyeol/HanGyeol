#include <iostream>
#include <stack>
using namespace std;
int main() {
    int cnt=1, n, num, max;
    stack<int> s;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        s.push(num);
    }
    max = s.top();
    s.pop();
    while(!s.empty()) {
        if(max < s.top()) {
            max = s.top();
            cnt++;
        }
        s.pop();
    }
    cout << cnt;
    return 0;
}
