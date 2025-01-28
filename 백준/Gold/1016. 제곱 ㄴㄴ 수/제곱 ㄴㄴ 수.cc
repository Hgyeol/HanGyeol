#include <stdio.h>

int main(void) {
    long long int arr[1100000] = {0};
    long long int max, min;
    long long int cnt = 0;
    scanf("%lld %lld", &min, &max);
    for (long long int i = 2; i*i <= max; i++) {
        long long int sq = i*i;
        long long int start = (min%sq == 0) ? min : (min/sq + 1)*sq;
        for (long long int j = start; j <= max; j += sq) {
            if(arr[j-min]==0) {
                arr[j-min]=1;
                cnt++;
            }
        }
    }
    printf("%lld", max-min+1-cnt);
    // if(cnt) printf("%lld", max-min+1-cnt);
    // else printf("0");
    return 0;
}