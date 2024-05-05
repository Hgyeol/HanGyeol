// Online C compiler to run C program online
#include <stdio.h>
int ott[11] = {0};
int sum(int n) {
    if(n < 4) {
        if(n == 3) return 4;
        else return n;
    }
    else return sum(n-1) + sum(n-2) + sum(n-3);
}

int main() {
    int n, num, res = 0;
    int ott[11] = {0};
    scanf("%d", &n);
    for(int i = 0; i< n; i++) {
        scanf("%d", &num);
        printf("%d\n", sum(num));
    }
    
    return 0;
}