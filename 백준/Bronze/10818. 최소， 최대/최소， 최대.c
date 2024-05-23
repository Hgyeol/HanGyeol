#include <stdio.h>

int main(void) {
    int n, num , max=-1000001, min =1000001;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (max < num) max =num;
        if(min > num) min = num;
    }
    printf("%d %d", min, max);
}