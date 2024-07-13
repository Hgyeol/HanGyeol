// Online C++ compiler to run C++ program online
#include <iostream>
#include <deque>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    deque<int> dq;
    int n, num;
    int X;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> num;
        if(num == 2) {
            cin >> X;
            dq.push_back(X);
        }
        else if(num == 1) {
            cin >> X;
            dq.push_front(X);
        }
        else if(num == 4) {
            if(dq.empty()==1) {
                cout << "-1\n";
            }
            else {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
            
        }
        else if(num == 3) {
            if(dq.empty()==1) {
                cout << "-1\n";
            }
            else {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
            
        }
        else if(num == 5) {
            cout << dq.size() << "\n";
        }
        else if(num == 6) {
            cout << dq.empty() << "\n"; 
        }
        else if(num == 7) {
            if(dq.empty()==1) {
                cout << "-1\n";
            }
            else {
                cout << dq.front() << "\n";
            }
            
        }
        else if(num == 8) {
            if(dq.empty()==1) {
                cout << "-1\n";
            }
            else {
                cout << dq.back() << "\n";
            }
            
        }
    }

    return 0;
}