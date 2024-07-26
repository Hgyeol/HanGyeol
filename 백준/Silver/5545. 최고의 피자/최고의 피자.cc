// Online C compiler to run C program online
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    int dp, tp, dk;
    int tk[100];
    cin >> n >> dp >> tp >> dk;
    for(int i = 0; i < n; i++) {
        cin >> tk[i];
    }
    sort(tk, tk + n, greater<int>());
    //for(int i = 0; i < n; i++) cout << tk[i] << " ";
    int Ktotal=dk, Ptotal=dp, avg=dk/dp;
    
    for(int i = 0; i < n; i++) {
        Ktotal += tk[i];
        Ptotal += tp;
        //cout << "avg = " << avg << "---k/p = " << Ktotal/Ptotal << "\n";
        if(avg < Ktotal/Ptotal) avg = Ktotal/Ptotal;
        //else break;
    }
    cout << avg;
    return 0;
}