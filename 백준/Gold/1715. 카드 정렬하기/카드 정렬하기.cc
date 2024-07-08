#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue<int, vector<int>, greater<int>> pq;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, num, res=0, m;
    
    cin >> n;
    
    for(int i = 0; i < n; i++) {
      cin >> num;
      pq.push(num);
    }
    while(pq.size()!=1) {
        m = pq.top();
        pq.pop();
        m += pq.top();
        pq.pop();
        pq.push(m);
        res += m;
    }
    cout << res;
    return 0;
}