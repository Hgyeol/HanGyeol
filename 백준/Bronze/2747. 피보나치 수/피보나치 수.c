#include <stdio.h>
#include<malloc.h>
long long int fibonach[91] = {0};

long long int fibo(int n) {
  if (fibonach[n] != 0) {
    return fibonach[n];
  }
  if (n <= 2) {
    fibonach[n] = 1;
    return 1;
  }
  else {
    fibonach[n] = fibo(n-1) + fibo(n-2);
    return fibonach[n];
  }
}
int main(void)
{
  int n;
  scanf("%d", &n);
  printf("%lld", fibo(n));
  return 0;
}
