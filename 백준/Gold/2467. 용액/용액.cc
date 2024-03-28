#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}
int main(void) {
  int n, l=0, r, num, abs;
  int first = 0,second=0;
  int min = 2000000001;
  scanf("%d", &n);
  r=n-1;
  int* solutions = (int*)malloc(sizeof(int)*n);
  for(int i = 0; i < n; i++) {
    scanf("%d", solutions + i);
  }
  qsort(solutions, n, sizeof(int), compare);
  while(l < r) {
    num = solutions[l] + solutions[r];
    abs = num > 0 ? num : -num;
    if (abs < min) {
      min = abs;
      first = l;
      second = r;
    }
    if (num > 0) {
      r--;
    }
    else if (num < 0) {
      l++;
    }
    else {
      first = l;
      second = r;
      break;
    }
  }
  printf("%d %d", solutions[first], solutions[second]);
  return 0;
}