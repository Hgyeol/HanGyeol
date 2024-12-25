#include <iostream>
using namespace std;
int main() {
    int cost[3]={300,60,10};
    int time;
    int res[3];
    cin >> time;
    for(int i = 0; i < 3; i++) {
        res[i] = time/cost[i];
        time %= cost[i];
    }
    if(time > 0) cout << -1;
    else {
        for(int i = 0; i < 3; i++) cout << res[i] << " ";
    }
    return 0;
}
