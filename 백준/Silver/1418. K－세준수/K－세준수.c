// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    int sosu[9592];
    int arr[100000]={0};
    int cnt = 0,  n, k, res_cnt=0, max=0;
    char res[4];
    for(int i = 2; i <= 100000; i++) {
        if(arr[i] == 0) {
            sosu[cnt] = i;
            cnt++;
            for(int j = i + i; j <= 100000; j+=i) {
                arr[j] = 1;
            }
        }
    }
    scanf("%d%d", &n, &k);
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < 9592; j++) {
            if(sosu[j] <= i) {
                if(i%sosu[j] == 0) {
                    if(max < sosu[j]) max = sosu[j];
                }
            }
            else break;
        }
        if(max <= k) res_cnt++;
        max = 0;
    }
    printf("%d", res_cnt);
    return 0;
}