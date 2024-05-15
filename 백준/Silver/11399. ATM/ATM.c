#include <stdio.h>
#include <stdlib.h>

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}
int main() {
    int n, sum=0, num=0;
    int arr[1000]={0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", arr+i);
    }
    qsort(arr, n, sizeof(int), compare);
    for(int i = 0; i < n; i++) {
        num += arr[i];
        sum += num;
    }
    printf("%d",sum);
    return 0;
}
