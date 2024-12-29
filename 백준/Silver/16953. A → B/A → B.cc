// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
using namespace std;
int main() {
    long long int a, b;
    queue<pair<long long int, long long int>> q;
    cin >> a >> b;
    q.push({a,1});
    while(!q.empty()) {
        long long int f = q.front().first;
        long long int s = q.front().second;
        q.pop();
        if(f == b) {
            cout << s;
            return 0;
        }
        if(f*2 <= b) q.push({f*2, s+1});
        if(f*10 + 1 <= b) q.push({f*10+1, s+1});
    }
    cout << -1;
    return 0;
}