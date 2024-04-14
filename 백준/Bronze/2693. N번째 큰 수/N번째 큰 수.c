// Online C compiler to run C program online
#include <stdio.h>
#include<malloc.h>

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    int* results = (int*)malloc(sizeof(int) * n);
    int* arr = (int*)malloc(sizeof(int) * 10);
    for(int j = 0; j < n; j++) {
      for (int i = 0; i < 10; i++) {
        scanf("%d", arr+i);
      }
      qsort(arr, 10, sizeof(int), compare);
      results[j] = arr[7];
    }
  for(int i =0; i<n; i++) {
    printf("%d\n", results[i]);
  }
  return 0;
}