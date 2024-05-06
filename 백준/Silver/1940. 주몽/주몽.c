#include <stdio.h>

int main(void) {
  int n, m,num,cnt=0;
  int arr[10000001] = {0};
  scanf("%d%d", &n, &m);
  for(int i = 0; i< n; i++) {
      scanf("%d", &num);
      arr[num] = 1;
  }
  for(int i = 1; i < m; i++) {
      if(arr[i]==1) {
          if(arr[m-i]==1) cnt++;
      }
  }
  printf("%d", cnt/2);
  return 0;
}