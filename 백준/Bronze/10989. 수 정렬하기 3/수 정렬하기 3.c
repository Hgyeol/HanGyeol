#include <stdio.h>

int main() {
    int n, num;
    int cnt[10000] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        cnt[num-1]++;
    }
    for(int i = 0; i < 10000; i++) {
        if(cnt[i] != 0) {
            for(int j = 0; j < cnt[i]; j++) {
                printf("%d\n", i+1);
            }
        }
    }
    return 0;
}