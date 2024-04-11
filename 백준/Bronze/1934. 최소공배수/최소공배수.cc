#include <stdio.h>
#include<malloc.h>
int main() {
  int n, n1, n2,r,result;
  scanf("%d", &n);
  int* arr = (int*)malloc(sizeof(int) * n);
  for(int i = 0; i < n; i++) {
    scanf("%d%d", &n1, &n2);
    result = n1*n2;
    while (n1%n2!=0) {
      r = n1%n2;
      n1 = n2;
      n2 = r;
    }
    arr[i] = result/n2;
  }
  for(int i = 0 ; i< n; i++) {
    printf("%d\n", arr[i]);
  }
  return 0;
}