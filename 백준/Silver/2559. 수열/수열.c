#include <stdio.h>

int main(void) {

  int arr[100001]={0};
  int k, n, max=-2000000000;
  scanf("%d%d", &n, &k);

  for(int i = 1; i <= n; i++) {
    scanf("%d", &arr[i]);
    arr[i] = arr[i-1] + arr[i];
  }

  for(int i = 1; i <= n-k+1; i++) {
    if(arr[i+k-1] - arr[i-1] > max) {
      max = arr[i+k-1] - arr[i-1];
    }
  }
  printf("%d", max);
  return 0;
}