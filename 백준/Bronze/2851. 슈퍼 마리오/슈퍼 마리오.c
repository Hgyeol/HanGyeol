// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int n;
    int arr[11]={0};
    for(int i = 1; i <= 10; i++) {
        scanf("%d", &n);
        arr[i] = arr[i-1]+n;
    }
    for(int i = 1; i <= 10; i++) {
        if(arr[i]>100) {
            if(arr[i]-100 > 100-arr[i-1]) printf("%d",arr[i-1]);
            else  printf("%d",arr[i]);
            break;
        }
        if(i==10) printf("%d", arr[i]);
    }
    return 0;
}