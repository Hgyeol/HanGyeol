// Online C++ compiler to run C++ program online
#include <iostream>
#include <deque>
using namespace std;
int main() {
    int n;
    deque<int> dq;
    cin >> n;
    for(int i = n; i > 0; i--) {
        dq.push_front(i);
        for(int j = 0; j < i; j++) {
            dq.push_front(dq.back());
            dq.pop_back();
        }
    }
    while(n--) {
        cout << dq.front() << " ";
        dq.pop_front();
    }
    return 0;
}