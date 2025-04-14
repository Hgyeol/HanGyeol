#include <iostream>
#define INF 4000001
using namespace std;
int main() {
    int arr[400][400] = {0};
    int v, e, a, b, c;
    cin >> v >> e;
    for(int i = 0; i < v; i++) {
        for(int j = 0; j < v; j++) {
            if(i!=j) arr[i][j] = INF;
        }
    }
    while(e--) {
        cin >> a >> b >> c;
        arr[a-1][b-1] = c;
    }
    // for(int i = 0; i < v; i++) {
    //     for(int j = 0; j < v; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    // cout << "\n\n\n";
    
    for(int k = 0; k < v; k++) {
        for(int i = 0; i < v; i++) {
            for(int j = 0; j < v; j++) {
                if(arr[i][j] > (arr[i][k] + arr[k][j])) {
                    arr[i][j] = arr[i][k] + arr[k][j];
                }
            }
        }
    }
    // for(int i = 0; i < v; i++) {
    //     for(int j = 0; j < v; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << "\n";
    // }

    int min = INF;
    for(int i = 0; i < v; i++) {
        for(int j = i+1; j < v; j++) {
            if(arr[i][j]!=INF && arr[j][i]!=INF) {
                if(min > (arr[i][j]+arr[j][i])) {
                    min = (arr[i][j]+arr[j][i]);
                }
            }
        }
    }
    if(min == INF) cout << -1;
    else cout << min;
    return 0;
}