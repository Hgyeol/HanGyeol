#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int arr[1001][1001]={0};
    for(int i = 1; i <= s1.length(); i++) {
        for(int j = 1; j <= s2.length(); j++) {
            if(s1[i-1]==s2[j-1]) arr[i][j] = arr[i-1][j-1]+1;
            else arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
        }
    }
    cout << arr[s1.length()][s2.length()] << "\n";
    
    if(arr[s1.length()][s2.length()] > 0) {
        vector<char> s;
        int i = s1.length();
        int j = s2.length();
        // s.push_back(s2[j]);
        while(arr[i][j]!=0) {
            if(arr[i-1][j] == arr[i][j]) i--;
            else if(arr[i][j-1] == arr[i][j]) j--;
            else {
                i--;
                j--;
                s.push_back(s2[j]);
            }
        }
        reverse(s.begin(), s.end());
        for(int i = 0; i < s.size(); i++) cout << s[i];
        // cout << "\n" << s.size();
    }
    
    return 0;
}
