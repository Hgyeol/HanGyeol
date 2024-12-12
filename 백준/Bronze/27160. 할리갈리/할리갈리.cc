// Online C++ compiler to run C++ program online
#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string, int> m;
    int t, n,f=0;
    string s;
    cin >> t;
    while(t--) {
        cin >> s >> n;
        if(m.find(s)==m.end()) m.insert({s,n});
        else m[s] += n;
    }
    for(pair<const string, int> & p : m) {
        if(p.second == 5) {
            f=1;
            break;
        }
    }
    if(f) cout << "YES";
    else cout << "NO";
    return 0;
}