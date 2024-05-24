// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n, m, i, j, tmp;
    int arr[100];
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    for(int k = 0; k < m; k++) {
        scanf("%d %d", &i, &j);
        i--;
        j--;
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}