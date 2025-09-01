// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int> q;
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++) q.push(i);
    cout << "<";
    while(!q.empty()) {
        for(int i = 0; i < k-1; i++) {
            int f = q.front();
            q.pop();
            q.push(f);
        }
        cout << q.front();
        q.pop();
        if(q.size()==0) cout << ">";
        else cout << ", ";
        
    }
    return 0;
}