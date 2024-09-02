// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n,m;
    char c;
    cin >> n >> m;
    char s[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> s[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m/2; j++) {
            if(s[i][j] != '.') {
                s[i][m-j-1] = s[i][j];
            }
            else if(s[i][m-j-1] != '.') {
                s[i][j] = s[i][m-j-1];
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << s[i][j];
        }
        cout << "\n";
    }
    return 0;
}