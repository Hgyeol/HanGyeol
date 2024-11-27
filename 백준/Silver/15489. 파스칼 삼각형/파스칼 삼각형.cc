// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int r, c, w;
    int arr[31][31]={0};
    int sum=0;
    for(int i = 1; i <= 30; i++) {
        for(int j = 1; j <= i; j++) {
            if(i == 1 || j == i) arr[i][j] = 1;
            else arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
        }
    }
    // for(int i = 0; i <= 30; i++) {
    //     for(int j = 0 ; j  <= 30; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    
    cin >> r >> c >> w;
    for(int i = 0; i < w; i++) {
        for(int j = 0; j <= i; j++) {
            sum += arr[r+i][c+j];
        }
    }
    cout << sum;
    return 0;
}
