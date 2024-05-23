#include <stdio.h>

int main(void) {
    char s[1001];
    int n;
    scanf("%s%d", s, &n);
    printf("%c", s[n-1]);
}