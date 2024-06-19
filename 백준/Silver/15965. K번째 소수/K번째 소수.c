// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
int main() {
    int n;
    bool arr[7368788]={0};
    scanf("%d", &n);
    for(int i = 2; i <= 7368787; i++) {
        if(arr[i] == 0) {
            n--;
            if(n==0) {
                printf("%d",i);
                break;
            }
            for(int j = i+i; j <= 7368787; j+=i) {
                arr[j]=1;
            }
        }
    }
    return 0;
}
