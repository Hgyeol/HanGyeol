#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>

int compare (const void * a, const void * b) {
  int n1 = *(int *)a;
  int n2 = *(int *)b;
  if (n1 > n2) return 1;
  else if (n1 < n2) return -1;
  else return 0;
}

int main(void)
{
  int n;
  int max, min, mostNum= 0;
  int cnt = 0;
  double avg = 0.0;
  scanf("%d", &n);
  int* arr = (int*)malloc(n * sizeof(int));
  int most[8001] = {0};
  for (int i = 0; i < n; i++) {
    scanf("%d", arr + i);
    most[arr[i]+4000]++;
  }
  qsort(arr, n, sizeof(int), compare);
  int num = arr[0];
  mostNum = most[arr[0]+4000];
  avg += arr[0];
  for (int i = 1; i<n; i++) {
    avg += arr[i];
    if (most[arr[i]+4000] >= mostNum) {
      if (most[arr[i]+4000] == mostNum && cnt < 1 && num != arr[i]) {
        mostNum = most[arr[i]+4000];
        num = arr[i];
        cnt++;
      }
      else if (most[arr[i]+4000] > mostNum) {
        cnt = 0;
        mostNum = most[arr[i]+4000];
        num = arr[i];
      }
    }
  }
  //qsort(arr, n, sizeof(int), compare);
  avg /= n;
  if (avg > 0) {
    if (avg-(int)avg < 0.5) {
      avg = (int)avg;
    }
    else {
      avg = (int)avg + 1;
    }
  }
  else {
    if (avg-(int)avg > -0.5) {
      avg = (int)avg;
    }
    else {
      avg = (int)avg - 1;
    }
  }
  printf("%.0lf\n", avg);
  printf("%d\n", arr[n/2]);
  printf("%d\n", num);
  printf("%d\n", arr[n-1] - arr[0]);
  return 0;
}
