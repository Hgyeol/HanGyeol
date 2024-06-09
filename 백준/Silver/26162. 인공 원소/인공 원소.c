// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    int sosu[118];
    int arr[118]={0};
    int cnt = 0,  n, num, check = 0;
    char res[4];
    for(int i = 2; i <= 118; i++) {
        if(arr[i] == 0) {
            sosu[cnt] = i;
            cnt++;
            for(int j = i + i; j <= 118; j+=i) {
                arr[j] = 1;
            }
        }
    }
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &num);
        if(num < 4) strcpy(res, "No");
        else {
            for(int i = 0; i < cnt; i++) {
                for(int j = i; j < cnt; j++) {
                    if(sosu[i]+sosu[j]==num) {
                        strcpy(res, "Yes");
                        check = 1;
                        break;
                    }
                }
                if(check) break;
            }
            if(check==0) strcpy(res, "No");
        }
        printf("%s\n", res);
        check = 0;
    }
    return 0;
}