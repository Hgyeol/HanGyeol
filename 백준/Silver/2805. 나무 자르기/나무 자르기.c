#include <stdio.h>
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
  long long int n, m, l=0, r=0, mid, hei=0;
  long long int arr[1000000];
  long long int res,ans;
  scanf("%lld%lld", &n, &m);
  for(long long int i = 0; i < n; i++) {
      scanf("%lld", arr + i);
  }
  qsort(arr, n, sizeof(long long int), compare);
  r=arr[n-1];
  while(l <= r) {
      mid = (l+r)/2;
      hei=0;
      for(int i = 0; i < n; i++) {
          if(mid < arr[i]) {
              hei+= arr[i] - mid;
          }
      }
      if(hei >= m) {
          ans = mid;
          l = mid+1;
      }
      else if (hei < m) {
          r = mid-1;
      }
  }
  printf("%lld", ans);
  return 0;
}