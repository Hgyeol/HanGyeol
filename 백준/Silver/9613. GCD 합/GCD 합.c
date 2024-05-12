#include <stdio.h>

int gcd (int a, int b) {
    int r;
    while (a%b!=0) {
        r = a%b;
        a = b;
        b = r;
    }
    return b;
}

int main() {
  int n, num;
  long long int sum = 0;
  int arr[1000000] = {0};
  scanf("%d", &n);
  for(int k = 0; k < n; k++) {
    scanf("%d", &num);
    for(int i = 0; i < num; i++) {
      scanf("%d", arr + i);
    }
    for(int i = 0; i < num; i++) {
        for(int j = i+1; j < num; j++) {
            sum += gcd(arr[i],arr[j]); 
        }
    }
    printf("%lld\n", sum);
    sum = 0;
  }
  return 0;
}