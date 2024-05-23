#include <stdio.h>

int main(void){
    int max = 0, res, n;
    for(int i = 1; i < 10; i++) {
        scanf("%d", &n);
        if (max < n) {
            max = n;
            res = i;
        }
    }
    printf("%d %d", max, res);
    return 0;
}