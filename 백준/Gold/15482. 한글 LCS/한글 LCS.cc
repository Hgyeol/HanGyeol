#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int arr[3001][3001]={0};
    for(int i = 3; i <= s1.length(); i+=3) {
        for(int j = 3; j <= s2.length(); j+=3) {
            if(s1.substr(i-3, 3) == s2.substr(j-3, 3)) arr[i][j] = arr[i-3][j-3]+1;
            else arr[i][j] = max(arr[i-3][j], arr[i][j-3]);
        }
    }
    cout << arr[s1.length()][s2.length()];
    return 0;
}