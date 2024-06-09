// Online C compiler to run C program online
#include <stdio.h>
int myabs(int a) {
    if(a < 0) return -1 * a;
    else return a;
}

int main() {
    int sosu[1229]={0};
    int arr[10001]={0};
    int cnt = 0,n,num,a=20000,b=10000;
    for(int i = 2; i <= 10000; i++) {
        if(arr[i] == 0) {
            sosu[cnt] = i;
            cnt++;
            for(int j = i + i; j <= 10000; j+=i) {
                arr[j] = 1;
            }
        }
    }
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &num);
        for(int i = 0; i < cnt; i++) {
            for(int j = i; j < cnt; j++) {
                if(sosu[i]+sosu[j]<=num) {
                    if(sosu[i]+sosu[j]==num) {
                        if(myabs(a-b) > myabs(sosu[i]-sosu[j])) {
                            a=sosu[i];
                            b=sosu[j];
                        }
                    }
                }
                else {
                    break;
                }
            }
        }
        printf("%d %d\n", a,b);
        a=20000;
        b=10000;
    }
    return 0;
}