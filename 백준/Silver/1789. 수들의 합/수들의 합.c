// Online C compiler to run C program online
#include <stdio.h>
#include<malloc.h>
int main() {
    long long int n, cnt=0;
    scanf("%lld", &n);
    int i = 2;
    while(1) {
        //cnt += (i-1) * i;
        cnt+=i;
        if(cnt >= n) break;
        i++;
    }
    printf("%lld", i-1);
    return 0;
}