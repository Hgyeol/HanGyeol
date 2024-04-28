#include <stdio.h>

int main() {
  unsigned long long int n;
  scanf("%llu", &n);
  if(n%2) printf("SK");
  else printf("CY");
  return 0;
}
