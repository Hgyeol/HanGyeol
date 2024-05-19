// Online C compiler to run
#include<stdio.h>
int main() {
    int n,k, tmp,cnt=1, p_cnt;
    scanf("%d%d", &n, &k);
    p_cnt=n;
    int arr[5001];
    for(int i = 1; i <= n; i++) {
        arr[i-1] = i;
    }
    printf("<");
    while(n>0) {
        for(int i = 0; i < n; i++) {
            if(cnt==k) {
                if(p_cnt>1) printf("%d, ", arr[i]);
                else printf("%d>",arr[i]);
                for(int j = i; j < n-1; j++) {
                    tmp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = tmp;
                }
                n--;
                i--;
                cnt=1;
                p_cnt--;
            }
            else cnt++;
        }
    }
}