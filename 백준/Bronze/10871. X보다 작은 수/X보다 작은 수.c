#include <stdio.h>

int main(void) {
    int n, num, f;
    scanf("%d%d", &n,&f);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        if(num < f) printf("%d ", num);
    }
}