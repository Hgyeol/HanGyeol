#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int max=0;
    string s1, s2;
    cin >> s1 >> s2;
    int arr[4001][4001]={0};
    for(int i = 1; i <= s1.length(); i++) {
        for(int j = 1; j <= s2.length(); j++) {
            if(s1[i-1]==s2[j-1]) arr[i][j] = arr[i-1][j-1]+1;
            else arr[i][j] = 0;
        }
    }
    for(int i = 0; i <= 4000; i++) {
        for(int j = 0; j <= 4000; j++) {
            if(max < arr[i][j]) max=arr[i][j];
        }
    }
    cout << max;
    return 0;
}