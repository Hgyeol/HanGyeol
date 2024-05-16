#include <stdio.h>

long long int fibonach[10001] = {0};

long long int fibo(int n) {
  if (fibonach[n] != 0) {
    return fibonach[n];
  }
  if (n <= 2) {
    fibonach[n] = 1;
    return 1;
  }
  else {
    fibonach[n] = fibo(n-1)%10007 + fibo(n-2)%10007;
    return fibonach[n]%10007;
  }
}
int main(void)
{
  int n;
  scanf("%d", &n);
  printf("%lld", fibo(n+1));
  return 0;
}
