#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> stack;
    int n, num;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++) {
        cin >> s;
        if(s.compare("push") == 0) {
            cin >> num;
            stack.push(num);
        }
        else if(s.compare("pop") == 0) {
            if(stack.empty()) {
                cout << "-1\n";
            }
            else {
                cout << stack.top() << "\n";
                stack.pop();
            }
        }
        else if(s.compare("top") == 0) {
            if(stack.empty()) {
                cout << "-1\n";
            }
            else {
                cout << stack.top() << "\n";
            }
        }
        else if(s.compare("size") == 0) {
            cout << stack.size() << "\n";
        }
        else if(s.compare("empty") == 0) {
            cout << (stack.empty() ? "1" : "0") << "\n";
        }
    }
    return 0;
}
