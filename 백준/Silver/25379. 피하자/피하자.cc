#include <stdio.h>

int main(void) {
  int n, a;
  long long int right_cnt=0;
  long long int left_cnt=0;
  long long int sum=0;
  int idx=0;
  scanf("%d", &n);
  for (int i = 0; i <n; i++) {
    scanf("%d", &a);
    if (a%2==0) {
      left_cnt+=i;
      right_cnt += n-i-1;
      sum+=idx;
      idx++;
    }
  }
  printf("%lld", left_cnt > right_cnt ? right_cnt-sum : left_cnt-sum);
  return 0;
}