#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++,puts("")) {
        for(int j = 0; j <= i; j++) {
            printf("*");
        }
    }
    return 0;
}