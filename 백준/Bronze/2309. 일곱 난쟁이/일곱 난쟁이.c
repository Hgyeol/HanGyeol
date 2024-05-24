// Online C compiler to run C program online
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
    int arr[9], sum = 0, c=0;
    for(int i = 0; i < 9; i++) {
        scanf("%d", arr+i);
        sum += arr[i];
    }
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            if(i!=j) {
                if(sum-arr[i]-arr[j]==100) {
                    arr[i]=0;
                    arr[j]=0;
                    c=1;
                    break;
                }
            }
        }
        if(c==1) break;
    }
    qsort(arr, 9, sizeof(int), compare);
    for(int i = 2;i < 9; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}