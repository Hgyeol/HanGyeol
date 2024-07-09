#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);     
    cin.tie(NULL);     
    cout.tie(NULL);
    stack<int> stack;
    int n, num, n2;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        switch(num) {
            case 1:
                cin >> n2;
                stack.push(n2);
                break;
            case 2:
                if(stack.empty()) {
                    cout << "-1\n";
                }
                else {
                    cout << stack.top() << "\n";
                    stack.pop();
                }
                break;
            case 3:
                cout << stack.size() << "\n";
                break;
            case 4:
                cout << (stack.empty() ? "1" : "0") << "\n";
                break;
            case 5:
                if(stack.empty()) {
                    cout << "-1\n";
                }
                else {
                    cout << stack.top() << "\n";
                }
        }
    }
    return 0;
}
