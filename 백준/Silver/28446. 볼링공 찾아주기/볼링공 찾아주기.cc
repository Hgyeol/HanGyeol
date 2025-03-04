#include <iostream>
#include <map>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<int, int> map;
    int m;
    cin >> m;
    int n, x, w;
    while(m--) {
        cin >> n;
        if(n == 1) {
            cin >> x >> w;
            map.insert({w, x});
        }
        else {
            cin >> w;
            cout << map[w] << "\n";
        }
    }
    return 0;
}