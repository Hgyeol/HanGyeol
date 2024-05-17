// Online C compiler to run
#include<stdio.h>
int main() {
    int n,cnt=0;
    int arr[10000001]={0};
    int sosu[100000]={0};
    scanf("%d", &n);
    for(int i = 2; i <= n; i++) {
        if(arr[i]!=1) {
            for(int j = i * 2; j <= n; j+=i) {
                arr[j]=1;
            }
        }
    }
    arr[0]=1;
    arr[1]=1;
    for(int i = 1; i <= n; i++) {
        if(arr[i]==0) {
            sosu[cnt] = i; 
            cnt++;
        }
    }
    int len = cnt;
    int check;
    while(n>1) {
        for(int i = 0; i<len; i++) {
            if(n%sosu[i]==0) {
                printf("%d\n", sosu[i]);
                n/=sosu[i];
                break;
            }
        }
    }
    return 0;
}