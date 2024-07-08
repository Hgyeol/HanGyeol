#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stack<int> stack;
    int n, num, res=0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        if(num!=0) {
            stack.push(num);
        }
        else {
            stack.pop();
        }
    }
    while(!stack.empty()) {
        res += stack.top();
        stack.pop();
    }
    cout << res;
    return 0;
}
