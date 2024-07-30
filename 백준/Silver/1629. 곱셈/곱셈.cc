#include <iostream>

using namespace std;

long long int power(long long int a, long long int b, long long int c){
    if(b == 0) return 1;
    long long int num = power(a, b / 2, c);
    num = num * num % c;
    if (b % 2 == 0) return num;
    else return num * a %c; 
}

int main(){
    
    long long int a, b, c;
    
    cin >> a >> b >> c;
    
    cout << power(a, b, c);
    return 0;
}
