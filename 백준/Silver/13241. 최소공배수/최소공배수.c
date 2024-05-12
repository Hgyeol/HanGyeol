#include <stdio.h>
#include<malloc.h>
int main() {
  long long int n1, n2,r;
  scanf("%lld%lld", &n1, &n2);
  long long int n3= n1, n4= n2;
  while (n1%n2!=0) {
    r = n1%n2;
    n1 = n2;
    n2 = r;
  }
  printf("%lld", n3*n4/n2);
  return 0;
}