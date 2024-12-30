#include <iostream>
using namespace std;
int main() {
    int cost[6]={500,100,50,10,5,1};
    int m, cnt=0;
    cin >> m;
    m = 1000-m;
    for(int i = 0 ; i < 6; i++) {
        cnt += m/cost[i];
        m %= cost[i];
    }
    cout << cnt;
    return 0;
}