#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, num;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++) {
        cin >> s;
        queue<char> queue;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ')') {
                if(queue.empty()) {
                    queue.push(s[i]);
                }
                else {
                    if(queue.front() != ')') queue.pop();
                }
            }
            else{
                queue.push(s[i]);
            }
        }
        if(queue.size()==0 && s[0] != ')') {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
