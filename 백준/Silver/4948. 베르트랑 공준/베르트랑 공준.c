#include <stdio.h>

int main(void) {
  int arr[246912]={0};
  int sosu[100000]={0};
  int cnt=0, n, res_cnt=0;
  for(int i = 2; i <= 246912; i++) {
      if(arr[i]==0) {
          sosu[cnt] = i;
          cnt++;
          for(int j = i+i; j <= 246912; j+=i) {
              arr[j]=1;
          }
      }
  }
  while(1) {
      scanf("%d", &n);
      if(n==0) break;
      res_cnt = 0;
      for(int i = 0; i < cnt; i++) {
          if(sosu[i] <= n*2) {
              if(sosu[i] > n) res_cnt++;
          }
          else break;
      }
      printf("%d\n", res_cnt);
  }
  /*
  for(int i = 0; i < cnt; i++) {
      printf("%d ", sosu[i]);
  }*/
  return 0;
}