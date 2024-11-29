#include <iostream>

using namespace std;

int main() {
    int pizza[11]={0,0,1};
    for(int i = 3; i <= 10; i++) {
        if(i%2) pizza[i] = (i/2)*(i/2 + 1) + pizza[i/2] + pizza[i/2+1];
        else pizza[i] = (i/2) * (i/2) + pizza[i/2]*2;
        // cout << pizza[i] << " " << i/2 * 2 << " " << pizza[i/2]*2 << "\n";
    }
    int n;
    cin >> n;
    cout << pizza[n];
    return 0;
}
