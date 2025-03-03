#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int> q;
    int n, t, b, num;
    cin >> n >> t;
    n *= 2;
    while(n--) {
        cin >> num;
        q.push(num);
    }
    while(t--) {
        cin >> num;
        num--;
        for(int i = 0; i < num; i++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << " ";
    }
    return 0;
}