// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    int arr[301]={0};
    int res[301]={0};
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) scanf("%d", arr+i);
    res[1] = arr[1];
    res[2] = res[1] + arr[2];
    for(int i = 3; i <= n; i++) {
        if(res[i-2] > res[i-3] + arr[i-1]) res[i] = arr[i] + res[i-2];
        else res[i] = arr[i] + res[i-3] + arr[i-1];
    }
    printf("%d",res[n]);
    return 0;
}