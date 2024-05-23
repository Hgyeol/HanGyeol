#include <stdio.h>

int main() {
    
    int a, b, c, max, r1, r2;
    
    while(1) {
        max=0;
        scanf("%d%d%d", &a, &b, &c);
        if(a==0 && b==0 && c==0) break;
        if(max < a) {
            max = a;
            r1=b;
            r2=c;
        }
        if(max < b) {
            max = b;
            r1=a;
            r2=c;
        }
        if(max < c) {
            max = c;
            r1=a;
            r2=b;
        }
        if((r1*r1 + r2*r2) == (max*max)) printf("right\n");
        else printf("wrong\n");
    }
    
    return 0;
}