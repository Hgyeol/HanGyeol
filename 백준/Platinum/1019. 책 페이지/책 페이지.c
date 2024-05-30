// Online C compiler to run C program online
#include <stdio.h>

int arr[10]={0};
int x = 1;
void add(int n) {
    while(n > 0) {
        arr[n%10]+=x;
        n/=10;
    }
}

int main() {
    int n, num;
    scanf("%d", &n);
    
    while(n>0) {
        if(n>=10){
            while(n%10!=9) {
                add(n);
                n--;
            }
            num = (n/10)+1;
            for(int i = 0; i < 10; i++) {
                arr[i] += num * x;
            }
            arr[0] -= x;
        }
        else {
            for(int i = 1; i <= n; i++) {
                arr[i]+=x;
            }
        }
        n /= 10;
        x*=10;
    }
    
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}