// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
typedef struct {
    char name[21];
    int ncan;
    int can;
    int cnt;
}pokemon;
int main() {
    int n;
    int res_cnt=0, mxcnt=0;
    char name[21];
    scanf("%d", &n);
    pokemon po[n];
    for(int i = 0; i < n; i++) {
        scanf("%s%d%d", po[i].name, &po[i].ncan, &po[i].can);
        po[i].cnt = 0;
    }
    for(int i = 0; i < n; i++) {
        while(1) {
            po[i].can -= po[i].ncan;
            if(po[i].can < 0) {
                break;
            }
            else {
                po[i].can += 2;
                res_cnt++;
                po[i].cnt++;
            }
        }
        if(mxcnt < po[i].cnt) {
            strcpy(name, po[i].name);
            mxcnt = po[i].cnt;
        }
    }
    printf("%d\n%s", res_cnt, name);
    return 0;
}