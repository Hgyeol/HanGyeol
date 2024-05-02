#include <stdio.h>

int main() {
    int arr[10000] = {0};
    int result[10000] = {0};
    int n, k, tmp, cnt= 0, res1, res2, check = 0;
    scanf("%d%d", &n, &k);
    for(int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    for(int i = 0; i < n; i++) {
        if(check) break;
        for(int j = 0; j < n-1; j++) {
            if(check) break;
            if(arr[j] > arr[j+1]) {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                cnt++;
                if(k == cnt) {
                    check = 1;
                    for(int k = 0; k < n; k++) {
                        result[k] = arr[k];
                    }
                    break;
                }
            }
        }
    }
    if(cnt!=k) printf("-1");
    else {
        for(int i = 0; i < n; i++) {
            printf("%d ", result[i]);
        }
    }
    return 0;
}