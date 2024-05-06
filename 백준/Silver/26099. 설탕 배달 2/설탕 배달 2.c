#include <stdio.h>

int main(void) {
  long long int sugar;
  long long int cnt = 0;
  scanf("%lld", &sugar);
  
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
  else printf("%lld", cnt);
  return 0;
}