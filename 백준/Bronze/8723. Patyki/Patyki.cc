#include <iostream>
#include <queue>
using namespace std;

int main() {
    int a, b, c;
    priority_queue<int> pq;
    cin >> a >> b >> c;
    pq.push(a);
    pq.push(b);
    pq.push(c);
    
    int m1 = pq.top();
    pq.pop();
    int m2 = pq.top();
    pq.pop();
    int m3 = pq.top();
    pq.pop();
    
    
    if(a==b && b==c) cout << 2;
    else if(m3*m3 + m2*m2 == m1*m1) {
         cout << 1;
    }
    else cout << 0;
    return 0;
}
