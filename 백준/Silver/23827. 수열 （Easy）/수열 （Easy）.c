#include <stdio.h>

int main() {
  long long int n;
  unsigned long long int res = 0;
  long long int arr[500010] = {0};
  long long int arr2[500010]={0};
  
  scanf("%lld", &n);
  for(long long int i = 1; i <= n; i++) {
      scanf("%lld", arr2 + i);
      arr[i] = arr[i-1] + arr2[i];
  }
  for(long long int i = 1; i < n; i++) {
      res += (arr2[i] * (arr[n]-arr[i]));
      res %= 1000000007;
  }
  printf("%llu", res);
  return 0;
}