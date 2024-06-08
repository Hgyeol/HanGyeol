// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int w, h, d;
    scanf("%d%d%d", &w, &h, &d);
    if(w-(2*d) <= 0 || h-(2*d) <= 0) printf("0");
    else printf("%d", (w-(2*d)) * (h-(2*d)));
    return 0;
}