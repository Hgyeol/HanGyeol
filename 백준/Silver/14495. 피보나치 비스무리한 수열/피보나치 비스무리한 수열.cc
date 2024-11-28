#include <iostream>

using namespace std;

int main() {
    long long int bismury[117]={0,1,1,1};
    for(int i = 4; i <= 116; i++) {
        bismury[i] = bismury[i-1] + bismury[i-3];
    }
    int n;
    cin >> n;
    cout << bismury[n];
    return 0;
}
