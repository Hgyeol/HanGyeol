// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, num, tmp1, tmp2;
    cin >> n;
    int maxdp[3]={0};
    int mindp[3]={0};
    int input[3];
    cin >> input[0] >> input[1] >> input[2];
    maxdp[0] = mindp[0] = input[0];
    maxdp[1] = mindp[1] = input[1];
    maxdp[2] = mindp[2] = input[2];
    for(int i = 1; i < n; i++) {
        cin >> input[0] >> input[1] >> input[2];
        
        tmp1 = maxdp[0];
        tmp2 = maxdp[2];
        maxdp[0] = max(maxdp[0], maxdp[1]) + input[0];
        maxdp[2] = max(maxdp[1],maxdp[2]) + input[2];
        maxdp[1] = max(max(tmp1,tmp2),maxdp[1]) + input[1];
        
        tmp1 = mindp[0];
        tmp2 = mindp[2];
        mindp[0] = min(mindp[0],mindp[1]) + input[0];
        mindp[2] = min(mindp[1],mindp[2]) + input[2];
        mindp[1] = min(min(tmp1,tmp2),mindp[1]) + input[1];
        
        
        // cout << i+1 << "번 째\n"; 
        // for(int j = 0; j < 3; i++) {
        //     cout << maxdp[j] << "-";
        // }
        // cout << "\n\n";
        // for(int j = 0; j < 3; i++) {
        //     cout << mindp[j] << "-";
        // }
        // cout << "\n\n";
    }
    
    cout << max(max(maxdp[0],maxdp[1]),maxdp[2]) << " " << min(min(mindp[0],mindp[1]),mindp[2]);
    return 0;
}