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
    for(int i = 1; i <= n; i++) {
        queue.push(i);
    }
    while(queue.size()!=1) {
        queue.pop();
        if(!queue.empty()) {
            num = queue.front();
            queue.pop();
            queue.push(num);
        }
    }
    cout << queue.front();
    return 0;
}
