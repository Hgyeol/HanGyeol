#include <stdio.h>

int main() {
  unsigned long long int n;
  scanf("%llu", &n);
  
  printf("%s", n%7==0||n%7==2 ? "CY" : "SK");
  
  return 0;
}
