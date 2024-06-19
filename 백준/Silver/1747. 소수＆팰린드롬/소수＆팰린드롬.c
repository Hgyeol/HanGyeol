// Online C compiler to run C program online
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdbool.h>
#include<string.h>
int main() {
    int prime[1000000];
    char s[8];
    int n, cnt=0, check=0, j, k;
    scanf("%d", &n);
    bool arr[10000001]={0};
    for(int i = 2; i <= 10000000; i++) {
        if(arr[i] == 0) {
            prime[cnt++]=i;
            for(int j = i+i; j <= 10000000; j+=i) {
                arr[j]=1;
            }
        }
    }
    for(int i = 0; i < cnt; i++) {
        if(prime[i] >= n){
            sprintf(s, "%d", prime[i]);
            j = 0, k =strlen(s)-1;
            if(strlen(s)%2) {
                while(j<=k-1) {
                    //printf("%c %c\n",s[j], s[k]);
                    if(s[j]!=s[k]) {
                        check=1;
                        break;
                    }
                    j++;
                    k--;
                }
            }
            else {
                while(j<=k) {
                    //printf("%c %c\n",s[j], s[k]);
                    if(s[j]!=s[k]) {
                        check=1;
                        break;
                    }
                    j++;
                    k--;
                }
            }
            if(check==0) {
                printf("%d",prime[i]);
                break;
            }
            check =0;
        }   
    }
    return 0;
}
