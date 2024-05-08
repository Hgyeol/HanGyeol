#include <stdio.h>

int main(void) {
    int n, cnt, res, check = 0;
    int arr[1001] = {0};
    scanf("%d%d", &n, &cnt);
    for(int i = 2; i <= n; i++) {
        for(int j = i; j <= n; j+=i) {
            if(arr[j]!=1) {
                arr[j] = 1; 
                cnt--;
            }
            if(cnt == 0) {
                res = j; 
                check = 1; 
                break;
            }
        }
        if(check) break;
    }
    printf("%d", res);
    return 0;
}