#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue<int> pq;
    int n, a, num;
    cin >> n;
    while(n--) {
        cin >> a;
        if(a==0) {
            if(pq.empty()) cout << "-1\n";
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else {
            while(a--) {
                cin >> num;
                pq.push(num);
            }
        }
    }
    return 0;
}
