#include <stdio.h>

int main(void) {
    int arr[42]={0};
    int num,cnt=0;
    for(int i = 0; i < 10; i++) {
        scanf("%d", &num);
        arr[num%42]=1;
    }
    for(int i = 0; i < 42; i++) {
        if(arr[i]==1) cnt++;
    }
    printf("%d", cnt);
}