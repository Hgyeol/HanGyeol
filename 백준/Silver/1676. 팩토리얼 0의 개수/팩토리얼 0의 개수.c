// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,cnt=0;
    scanf("%d", &n);
    while(n!=0) {
        if(n%125==0) cnt+=3;
        else if (n%25==0) cnt+=2;
        else if (n%5==0) cnt++;
        n--;
    }
    printf("%d", cnt);
    return 0;
}