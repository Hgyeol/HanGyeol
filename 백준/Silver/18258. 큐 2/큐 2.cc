#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    queue<int> queue;
    int n, num;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++) {
        cin >> s;
        if(s.compare("push") == 0) {
            cin >> num;
            queue.push(num);
        }
        else if(s.compare("pop") == 0) {
            if(queue.empty()) {
                cout << "-1\n";
            }
            else {
                cout << queue.front() << "\n";
                queue.pop();
            }
        }
        else if(s.compare("size") == 0) {
            cout << queue.size() << "\n";
        }
        else if(s.compare("empty") == 0) {
            cout << (queue.empty() ? "1" : "0") << "\n";
        }
        else if(s.compare("front") == 0) {
            if(queue.empty()) {
                cout << "-1\n";
            }
            else {
                cout << queue.front() << "\n";
            }
        }
        else if(s.compare("back") == 0) {
            if(queue.empty()) {
                cout << "-1\n";
            }
            else {
                cout << queue.back() << "\n";
            }
        }
    }
    return 0;
}
