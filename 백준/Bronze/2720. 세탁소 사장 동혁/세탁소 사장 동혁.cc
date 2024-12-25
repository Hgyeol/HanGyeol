#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int cost[4]={25,10,5,1};
        int money;
        cin >> money;
        for(int i = 0; i < 4; i++) {
            cout << money/cost[i] << " ";
            money %= cost[i];
        }
        cout << "\n";
    }
    return 0;
}
