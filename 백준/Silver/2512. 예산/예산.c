#include <stdio.h>

int main(void) {
    int n, money, sum=0, ans, max=0, min=1000000001;
    int arr[10000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", arr+i);
        if(max < arr[i]) max = arr[i];
        if(min > arr[i]) min = arr[i];
    }
    scanf("%d", &money);
    int l = 1, r= max,mid;
    while(l <= r) {
        mid = (l+r)/2;
        sum=0;
        for(int i = 0; i < n; i++) {
            if(arr[i] > mid) sum+=mid;
            else sum += arr[i];
        }
        if(sum > money) {
            r = mid -1;
        }
        else if(sum <= money) {
            ans = mid;
            l = mid + 1;
        }
    }
    printf("%d", ans);
    return 0;
}