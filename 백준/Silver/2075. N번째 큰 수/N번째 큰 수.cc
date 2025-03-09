#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue<int, vector<int>, greater<int>> pq;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, num, nxn;
    
    cin >> n;
    nxn = n*n - n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        pq.push(num);
    }
    for(int i = 0; i < nxn; i++) {
        cin >> num;
        if(pq.top() < num) {
            pq.pop();
            pq.push(num);
        }
        
    }
    cout << pq.top();
    return 0;
}