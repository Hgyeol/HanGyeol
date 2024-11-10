#include <iostream>
#include <string>
using namespace std;

int main() {
    while(1) {
        string s;
        int age, weight;
        cin >> s >> age >> weight;
        if(!s.compare("#") && age == 0 && weight == 0) break;
        if(age > 17 || weight >= 80) cout << s << " Senior\n";
        else cout << s << " Junior\n";
    }
    return 0;
}
