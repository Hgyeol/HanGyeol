#include <stdio.h>

long long int gcd(int a, int b) {
    long long int r;
    while (a%b!=0) {
        r = a%b;
        a = b;
        b = r;
    }
    return b;
}

int main() {
  long long int n, num, a, b;
  scanf("%lld", &n);
  for(int i = 0; i < n; i++) {
      scanf("%lld%lld", &a, &b);
      printf("%lld\n", a*b/gcd(a,b));
  }
  return 0;
}