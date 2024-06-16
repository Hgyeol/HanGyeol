// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a, b, r, a2,b2;
    char c;
    scanf("%d%c%d", &a, &c, &b);
    a2 =a;
    b2 =b;
    while(a%b!=0) {
        r=a%b;
        a = b;
        b = r;
    }
    printf("%d:%d",a2/b, b2/b);
    return 0;
}