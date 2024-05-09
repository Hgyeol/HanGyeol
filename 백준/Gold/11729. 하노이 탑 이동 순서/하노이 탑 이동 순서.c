// Online C compiler to run C program online
#include <stdio.h>

unsigned long long int cnts[101]= {0};
unsigned long long int Hanoi_cnt(long long int n) {
    if(cnts[n]!=0) return cnts[n];
    if(n == 1) {
        cnts[n] = 1;
        return 1;
    }
    else {
        cnts[n] = Hanoi_cnt(n-1) * 2  + 1;
        return cnts[n];
    }
}

void Hanoi(int n, int A, int B, int C) {
    if(n==1) {
        printf("%d %d\n", A, C);
    }
    else {
        Hanoi(n-1, A, C, B);
        printf("%d %d\n", A, C);
        Hanoi(n-1, B, A, C);
    }
}

int main() {
    unsigned long long int n;
    scanf("%llu", &n);
    printf("%llu\n", Hanoi_cnt(n));
    Hanoi(n, 1, 2, 3);
    return 0;
}