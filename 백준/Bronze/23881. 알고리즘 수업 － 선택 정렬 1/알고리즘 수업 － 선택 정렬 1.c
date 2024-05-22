// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n, k, cnt=0, max=-1, select, tmp,res1, res2;
    int arr[10000];
    scanf("%d%d", &n, &k);
    for(int i = 0; i<n; i++) {
        scanf("%d", arr+i);
    }
    for(int i = n-1; i > -1; i--) {
        select= i;
        for(int j = 0; j <= i; j++) {
            if(max < arr[j]) {
                max = arr[j];
                select = j;
            }
        }
        if(i!=select) {
            cnt++;
            if(cnt == k) {
                res1 = arr[i];
                res2 = arr[select];
            }
            tmp = arr[select];
            arr[select] = arr[i];
            arr[i]=tmp;
        }
        max = -1;
    }
    if(cnt<k) printf("-1");
    else printf("%d %d", res1, res2);
    return 0;
}