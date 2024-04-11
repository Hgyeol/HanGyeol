#include <stdio.h>
#include<malloc.h>
int main() {
  int n1, n2,r, min, max;
  scanf("%d%d", &n1, &n2);
  int n3= n1, n4= n2;
  while (n1%n2!=0) {
    r = n1%n2;
    n1 = n2;
    n2 = r;
  }
  printf("%d\n%d", n2, n3*n4/n2);
  return 0;
}