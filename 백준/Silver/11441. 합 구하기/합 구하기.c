#include <stdio.h>

int main(void) {

  int arr[100001]={0};
  int i, j, m,n;
  scanf("%d", &n);

  for(int k = 1; k <= n; k++) {
    scanf("%d", &arr[k]);
    arr[k] = arr[k-1] + arr[k];
  }
  scanf("%d", &m);
  for(int k = 0; k < m; k++) {
      scanf("%d%d",&i, &j);
      printf("%d\n", arr[j] - arr[i-1]);
  }
  return 0;
}