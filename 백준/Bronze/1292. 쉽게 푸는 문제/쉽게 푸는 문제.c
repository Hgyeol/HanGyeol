// Online C compiler to run C program online
#include <stdio.h>
#include<malloc.h>
int main() {
    int a,b, sum=0, cnt=0, check=1;
    scanf("%d%d", &a, &b);
    int* arr = (int*)malloc(sizeof(int) * b);
    int i = 1;
    while(check) {
        for(int j = 1; j<=i; j++) {
            arr[cnt]=i;
            cnt++;
            if (cnt == b) {
                check = 0;
                break;
            }
        }
        i++;
        
        
    }
    for(int k = a-1; k < b; k++) {
        sum+= arr[k];
    }
    printf("%d", sum);
    return 0;
}