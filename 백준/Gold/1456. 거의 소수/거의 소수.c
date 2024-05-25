// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
int main() {
    bool arr[10000001] = {0};
    long long int res[1000000] ={0};
    long long int a, b;
    int cnt=0, res_cnt=0;
    scanf("%lld%lld", &a, &b);
    
    for(int i = 2; i <= 10000001; i++) {
        if(arr[i]!=1) {
            res[cnt]=i;
            cnt++;
            for(int j = 2 * i; j <= 10000001; j+=i) {
                arr[j] = 1;
            }
        }
    }
    for(int i = 0; i < cnt; i++) {
        for(long long int j = res[i] * res[i]; j <= b; j *= res[i]) {
            if(j>=a) {
                res_cnt++;
                if(j > b/res[i]) break;
            }
        }
    }
	printf("%d", res_cnt);
    return 0;
}