// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// 1억까지 소수이면서 펠린드롬인 수는 최대 99799다 즉 1억은 개소리다\

bool f(int num) {
    string str = to_string(num);
    int len = str.length();
    for(int i = 0; i < len/2; i++) {
        if(str[i]!=str[len-i-1]) return false;
    }
    return true;
}

int main() {
    bool sosu[10000001]={1,1,};
    for(int i = 2; i < 10000001; i++) {
        for(int j = i+i; j < 10000001; j+=i) {
            sosu[j]=1;
        }
    }
    int a, b;
    vector<int> v;
    cin >> a >> b;
    if(b > 10000000) b = 10000000;
    for(int i = a; i <= b; i++) {
        if(sosu[i]==false) {
            if(f(i)) v.push_back(i);
        }
    }
    v.push_back(-1);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }
    return 0;
}