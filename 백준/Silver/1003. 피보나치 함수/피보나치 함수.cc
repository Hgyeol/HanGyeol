#include <stdio.h>
#include<malloc.h>
int fibonach[41] = {0};

int fibo(int n) {
  if (fibonach[n] != 0) {
    return fibonach[n];
  }
  if (n <= 2 && n > 0) {
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
  int n, fibo_result;
  scanf("%d", &n);
  int* zero_arr = (int*)malloc(sizeof(int) * n);
  int* one_arr = (int*)malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &fibo_result);

    if (fibo_result == 0) {
      zero_arr[i] = 1;
      one_arr[i] = 0;
    }
    else if(fibo_result==1) {
      zero_arr[i] = 0;
      one_arr[i] = 1;
    }
    else {
      zero_arr[i] = fibo(fibo_result - 1);
      one_arr[i] = fibo(fibo_result);
    }
  }
  for (int i = 0; i < n; i++) {
    printf("%d %d\n", zero_arr[i], one_arr[i]);
  }
  return 0;
}
