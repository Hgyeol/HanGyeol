// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int p, n, num, cnt= 0;
    int arr[201] = {0};
    scanf("%d%d", &p, &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        arr[num]++;
    }
    for(int i = 1; i < 201; i++) {
        if(arr[i] > 0) {
            for(int j = 0; j < arr[i]; j++) {
                if(p >= 200) break;
                else {
                    p+=i;
                    cnt++;
                }
            }
        }
    }
    printf("%d", cnt);
    return 0;
}