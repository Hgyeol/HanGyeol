// Online C++ compiler to run C++ program online
#include <iostream>
#include <deque>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    deque<int> dq;
    int n, num, m, k, check = 0, cnt=0;
    
    cin >> n >> k >> m;
    
    for(int i = 1; i <= n; i++) {
        dq.push_back(i);
    }
    k--;
    while(dq.empty()!=1) {
        for(int i = 0; i < k; i++) {
            if(check==0) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
            else {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
        if(check == 0) {
            cout << dq.front() << "\n";
            dq.pop_front();
        }
        else {
            cout << dq.back() << "\n";
            dq.pop_back();
        }
        cnt++;
        
        if(cnt == m) {
            if(check == 0) check = 1;
            else check = 0;
            cnt=0;
        }
    }

    return 0;
}