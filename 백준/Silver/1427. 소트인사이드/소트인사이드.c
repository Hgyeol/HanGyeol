// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[10]={0};
    int n, num, i=0, cnt=0;
    scanf("%d", &n);
    while(n > 0) {
        arr[n%10]++;
        n/=10;
    }
    for(int i = 9; i > -1; i--) {
        if(arr[i]>0) {
            for(int j = 0; j < arr[i]; j++) printf("%d", i);
        }
    }
    return 0;
}