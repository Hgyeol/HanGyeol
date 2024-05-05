#include <stdio.h>

long long int arr[101] = {0};

long long int pado (long long int n) {
    if(arr[n] != 0) return arr[n];
    if(n <= 3) {
        arr[n] = 1;
        return 1;
    }
    arr[n] = pado(n-2) + pado(n-3);
    return arr[n];
}

int main() {
    int cnt;
    long long int n;
    scanf("%d", &cnt);
    for (int i = 0; i < cnt; i++) {
        scanf("%lld", &n);
        printf("%lld\n", pado(n));
    }
    return 0;
}