#include <stdio.h>

int main() {
    int n,num, cnt=0, c=0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        if(num > 1) {
            for(int i = 2; i < num; i++) {
                if(num%i==0) {
                    c=1;
                    break;
                }
            }
            if(c==0)cnt++;
            c=0;
        }
    }
    printf("%d", cnt);
    return 0;
}