// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n, j, k,max=0, check = 0;
    scanf("%d", &n);
    
    for(int i = 4; i <= n; i++) {
        j=i;
        k=i;
        while(1) {
            if(j%10!=4 && j%10!=7) break;
            else {
                j/=10;
                if(j == 0) {
                    check = 1;
                    break;
                }
            }
        }
        if(check) {
            max=k;
            check = 0;
        }
    }
    printf("%d", max);
    return 0;
}