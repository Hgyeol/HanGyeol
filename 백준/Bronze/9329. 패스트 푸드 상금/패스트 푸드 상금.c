// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int t, n, m, min = 100, sum=0;
    int kind[30]={0};
    int k[10];
    int compare[10][30];
    int money[30];
    scanf("%d", &t);
    for(int o = 0;o < t; o++) {
        scanf("%d%d", &n, &m);
        for(int i = 0; i < n; i++) {
            scanf("%d", k + i);
            for(int j = 0; j < k[i]; j++) {
                scanf("%d", &compare[i][j]);
            }
            scanf("%d", money+i);
        }
        for(int j = 0; j < m; j++) {
            scanf("%d", &kind[j]);
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < k[i]; j++) {
                if(min > kind[compare[i][j]-1]) min = kind[compare[i][j]-1];
            }
            sum += min * money[i];
            min=100;
        }
        printf("%d\n", sum);
        sum=0;
        
    }
    return 0;
}