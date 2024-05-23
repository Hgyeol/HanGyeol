#include <stdio.h>

int main(void){
    int a,b,c;
    long long int res = 0;
    scanf("%d%d%d", &a, &b, &c);
    res = a * b * c;
    int arr[10] ={0};
    while(res > 0) {
        arr[res%10]++;
        res/=10;
    }
    for(int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}