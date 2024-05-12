#include <stdio.h>

long long int fibonach[81] = {0};

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
  printf("%lld", fibo(n) * 2 + fibo(n+1) * 2);
  return 0;
}
