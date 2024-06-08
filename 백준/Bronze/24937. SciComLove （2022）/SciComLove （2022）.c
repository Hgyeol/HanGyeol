// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    char s[11]="SciComLove";
    scanf("%d", &n);
    n %= 10;
    for(int i = 0; i < 10; i++) {
        if(i >= n) printf("%c", s[i]);
    }
    for(int i = 0; i < n; i++) {
        printf("%c", s[i]);
    }
    return 0;
}