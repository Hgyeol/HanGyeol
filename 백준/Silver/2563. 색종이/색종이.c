// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n, l, d, result=0;
    int arr[101][101]={0};
    scanf("%d", &n);
    
    while(n--) {
        scanf("%d%d", &l, &d);
        for(int i = 100-d; i > 90-d; i--) {
            for(int j = l+1; j < l+11; j++) {
                arr[i][j]=1;
            }
        }
        // for(int i = 80; i < 101; i++) {
        //     for(int j = 1; j < 31; j++) {
        //         printf("%d ", arr[i][j]);
        //     }
        //     printf("\n");
        // }
    }
    for(int i = 1; i < 101; i++) {
        for(int j = 1; j < 101; j++) {
            if(arr[i][j]) result++;
        }
    }
    
    printf("%d", result);
    return 0;
}