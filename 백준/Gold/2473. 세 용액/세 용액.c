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
  int n, l=0, r;
  long long int num, abs;
  int first = 0,second=0, third = 0;
  long long int min = 3000000001;
  scanf("%d", &n);
  r=n-1;
  long long int* solutions = (long long int*)malloc(sizeof(long long int)*n);
  for(long long int i = 0; i < n; i++) {
    scanf("%lld", solutions + i);
  }
  qsort(solutions, n, sizeof(long long int), compare);
  for(int i = 0; i < n; i++) {
      //f = solutions[i];
      l = 0;
      r = n - 1;
      //first = 0, second=0, third = 0;
      //min = 2000000001;
      while(l < r) {
        num = solutions[i];
        if(solutions[i] != solutions[l]) num+=solutions[l];
        else {
            l++;
            num += solutions[l];
        }
        if(solutions[i] != solutions[r]) num += solutions[r];
        else {
            r--;
            num += solutions[r];
        }
        if(l==r) break;
        abs = num > 0 ? num : -num;
        if (abs < min) {
          min = abs;
          first = l;
          second = r;
          third = i;
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
          third = i;
          break;
        }
      }
  }
  if(third < first && third < second) {
      printf("%d %d %d", solutions[third], solutions[first], solutions[second]);
  }
  else if (third > first && third < second) {
      printf("%d %d %d", solutions[first], solutions[third], solutions[second]);
  }
  else if (third > first && third > second) {
      printf("%d %d %d", solutions[first], solutions[second], solutions[third]);
  }
  return 0;
}