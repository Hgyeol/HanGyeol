#include <stdio.h>

int main(void) {
  int sugar;
  int cnt = 0;
  scanf("%d", &sugar);
  
  while(1) {
      if (sugar % 5== 0) {
          cnt += sugar/5;
          break;
      }
      sugar -= 3;
      cnt++;
      if (sugar <= 0) break;
  }
  if(sugar < 0) printf("-1");
  else printf("%d", cnt);
  return 0;
}