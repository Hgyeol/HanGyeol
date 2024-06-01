#include <stdio.h>

int main(void) {

  int arr[250001]={0};
  int x, n, cnt=0, max=0;
  scanf("%d%d", &n, &x);

  for(int i = 1; i <= n; i++) {
    scanf("%d", &arr[i]);
    arr[i] = arr[i-1] + arr[i];
  }

  for(int i = 1; i <= n-x+1; i++) {
    //printf("%d\n",arr[i+x-1] - arr[i-1]);
    if(arr[i+x-1] - arr[i-1] > max) {
      max = arr[i+x-1] - arr[i-1];
      cnt=0;
    }
    if(arr[i+x-1] - arr[i-1] == max) {
      cnt++;
    }
  }
  if(max==0) printf("SAD");
  else printf("%d\n%d", max, cnt);
  return 0;
}