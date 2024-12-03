#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int arr[101][101][101]={0};
    for(int i = 1; i <= s1.length(); i++) {
        for(int j = 1; j <= s2.length(); j++) {
            for(int k = 1; k <= s3.length(); k++) {
              if(s1[i-1]==s2[j-1] && s2[j-1] == s3[k-1]) arr[i][j][k] = arr[i-1][j-1][k-1]+1;
              else arr[i][j][k] = max({arr[i-1][j][k], arr[i][j-1][k], arr[i][j][k-1]});
            }
            
        }
    }
    int max=0;
    for(int i = 0; i <= s1.length(); i++) {
        for(int j = 0; j <= s2.length(); j++) {
            for(int k = 0; k <= s3.length(); k++) {
                // cout << arr[i][j][k] << " ";
                if(max < arr[i][j][k]) max=arr[i][j][k];
            }
            // cout << "\n";
        }
        // cout << "\n\n";
    }
    cout << max;
    return 0;
}