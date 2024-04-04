#include <stdio.h>

int main(void) {
  int n, cnt=0, sum=0, j;
  scanf("%d",&n);

  for (int i = 1; i <= n; i++) {
    j=i;
    while (sum <= n) {
      if (sum==n) {
        cnt++;
        break;
      }
      sum += j;
      j++;
    }
    sum=0;
  }
  printf("%d", cnt);
  return 0;
}