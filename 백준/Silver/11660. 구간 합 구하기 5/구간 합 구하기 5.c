// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n, m, x1, y1, x2, y2, num;
    long long int sum=0;
    long long int res[1025][1025]={0};
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            scanf("%d", &num);
            res[i][j] = res[i-1][j] + res[i][j-1] - res[i-1][j-1] + num;
        }
    }
    /*
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }*/
    
    for(int i = 0; i < m; i++) {
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        printf("%lld\n",res[x2][y2] - res[x1-1][y2] - res[x2][y1-1] + res[x1-1][y1-1]);
        
    }
    
    return 0;
}