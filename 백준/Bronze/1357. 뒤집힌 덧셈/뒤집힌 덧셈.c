// Online C compiler to run C program online
#include <stdio.h>

int rev (int n) {
    int rev=0;
    while(n > 0) {
        rev *= 10;
        rev += n%10;
        n /= 10;
    }
    return rev;
}

int main() {
    int a,b;
    scanf("%d%d", &a, &b);
    printf("%d", rev(rev(a)+rev(b)));
    return 0;
}