// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int w,h,p,q,t;
    scanf("%d%d",&w, &h);
    scanf("%d%d", &p, &q);
    scanf("%d", &t);
    printf("%d %d", ((p+t)/w)%2 ? w - (p+t)%w : (p+t)%w, ((q+t)/h)%2 ? h - (q+t)%h: (q+t)%h);
    return 0;
}
