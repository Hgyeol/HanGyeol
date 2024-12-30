#include <iostream>
using namespace std;
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[200001]={0};
    int n,m,k,s,e;
    cin >> n >> m;
    while(m--) {
        cin >> k >> s >> e;
        if(arr[k] <= s) {
            cout << "YES\n";
            arr[k] = e;
        }
        else cout << "NO\n";
    }
    return 0;
}
