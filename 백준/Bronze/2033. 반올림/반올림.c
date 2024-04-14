// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int n, n2, ten = 10, cnt = 0;
  scanf("%d", &n);
  n2 = n;
  while (n >=10) {

    if(n2%ten > 4*ten/10) {
      n2 = n2 + ten-(n2%ten);
    }
    else {
      n2 = n2 - (n2%ten);
    }
    ten*=10;
    n/=10;
  }
  printf("%d", n2);
  return 0;
}