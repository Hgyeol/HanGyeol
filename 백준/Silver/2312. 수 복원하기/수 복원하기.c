// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    int sosu[9592]={0};
    int arr[100001]={0};
    int cnt = 0,n,num, scnt=0,num2;
    for(int i = 2; i <= 100000; i++) {
        if(arr[i] == 0) {
            sosu[cnt] = i;
            cnt++;
            for(int j = i + i; j <= 100000; j+=i) {
                arr[j] = 1;
            }
        }
    }
    //printf("%d ", cnt);
    /*sosu[0] = 2;
    for(int i = 0; i < cnt; i++) {
        printf("%d ", sosu[i]);
    }
    printf("\n\n");*/
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &num);
        for(int i = 0; i < cnt; i++) {
            if(sosu[i] <= num) {
                num2 = num;
                while(1) {
                    if(num2 % sosu[i] == 0) {
                        scnt++;
                        num2 /= sosu[i];
                    }
                    else break;
                }
                if(num%sosu[i]==0) {
                    printf("%d %d\n", sosu[i], scnt);
                    num /= sosu[i];
                    scnt = 0;
                }
            }
            else break;
        }
    }
    return 0;
}