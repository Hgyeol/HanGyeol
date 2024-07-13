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
    string s;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> s;
        //cout << s << "\n";
        if(s.compare("push_back")==0) {
            cin >> num;
            dq.push_back(num);
        }
        else if(s.compare("push_front")==0) {
            cin >> num;
            dq.push_front(num);
        }
        else if(s.compare("pop_back")==0) {
            if(dq.empty()==1) {
                cout << "-1\n";
            }
            else {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
            
        }
        else if(s.compare("pop_front")==0) {
            if(dq.empty()==1) {
                cout << "-1\n";
            }
            else {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
            
        }
        else if(s.compare("size")==0) {
            cout << dq.size() << "\n";
        }
        else if(s.compare("empty") == 0) {
            cout << dq.empty() << "\n"; 
        }
        else if(s.compare("size")==0) {
            cout << dq.size() << "\n";
        }
        else if(s.compare("front")==0) {
            if(dq.empty()==1) {
                cout << "-1\n";
            }
            else {
                cout << dq.front() << "\n";
            }
            
        }
        else if(s.compare("back")==0) {
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