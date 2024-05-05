// Online C compiler to run C program online
#include <stdio.h>
unsigned long long int ott[1000001] = {0};
unsigned long long int sum(long long int n) {
    if(ott[n]!=0) return ott[n];
    if(n < 4) {
        if(n == 3) {
            ott[n] = 4;
            return 4;
        }
        else {
            ott[n] = n;
            return n;
        }
    }
    else {
        ott[n] = ((sum(n-1) + sum(n-2))%1000000009 + sum(n-3))%1000000009;
        return ott[n];
    }
}

int main() {
    int n;
    int num;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        printf("%llu\n", sum(num));
    }
    
    return 0;
}