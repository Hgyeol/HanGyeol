// Online C compiler to run C program online
#include <stdio.h>

int f_gcd (int a, int b) {
    int r;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int n, num;
    int A1, A2, B1, B2;
    scanf("%d%d%d%d", &A1, &A2, &B1, &B2);
    int A3, B3, gcd, lcm;
    gcd = f_gcd(A2, B2);
    lcm = A2 * B2 / gcd;
    A3 = lcm/A2;
    B3 = lcm/B2;
    
    A1 *= A3;
    B1 *= B3;
    int result1, result2;
    result1 = A1 + B1;
    printf("%d %d", result1/f_gcd(result1, lcm), lcm/f_gcd(result1, lcm));
    
    return 0;
}