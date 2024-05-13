// Online C compiler to run C program online
#include <stdio.h>


int main() {
    int n,m, num;
    int arr[20000001] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        arr[num+10000000]=1;
    }
    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        scanf("%d", &num);
        printf("%d ", arr[num+10000000]);
    }
    return 0;
}