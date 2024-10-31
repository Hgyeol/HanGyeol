// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int arr[5][5];
int res[5][5];

void matrixMultiply(int a[5][5], int b[5][5], int n) {
    int mid[5][5] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                mid[i][j] += (a[i][k] * b[k][j]) % 1000;
                mid[i][j] %= 1000;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = mid[i][j];
        }
    }
}

int main() {
    
    long long int n, b, sum=0;
    cin >> n >> b;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[i][j] = (i == j) ? 1 : 0;
        }
    }
    while (b > 0) {
        if (b % 2 == 1) {
            matrixMultiply(res, arr, n);
        }
        matrixMultiply(arr, arr, n); 
        b /= 2;
    }
    for(int i = 0; i < n; i++, puts("")) {
        for(int j = 0; j < n; j++) {
            cout << res[i][j] << " ";
        }
    }
    return 0;
}