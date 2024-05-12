// Online C compiler to run C program online
#include <stdio.h>

long long int gcd (long long int a, long long int b) {
    if(b == 0) return a;
    return gcd(b, a%b);
}

long long int lcm (long long int a, long long int b) {
    return a * b / gcd(a, b);
}

int main() {
    long long int n, num, max=0;
    scanf("%lld", &n);
    while(n--) {
        scanf("%lld", &num);
        if(max < lcm(lcm(num-1, num-2),num-3)) {
            max = lcm(lcm(num-1, num-2),num-3);
        }
        if(max < lcm(lcm(num-1, num-2),num)) {
            max =lcm(lcm(num-1, num-2),num);
        }
        if(num%2) {
            if(max <lcm(lcm(num-3, num-2), num)) {
                max=lcm(lcm(num-3, num-2), num);
            }
            printf("%lld\n", max);
        }
        else {
            if(max < lcm(lcm(num-1, num-3), num)) {
                max = lcm(lcm(num-1, num-3), num);
            }
            printf("%lld\n", max);
        }
    }
    return 0;
}