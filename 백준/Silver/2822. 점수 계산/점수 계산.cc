#include <stdio.h>
int main(void) {
  int sum=0, tmp;
  int arr2[8];
  int arr[8];
  int seqeunce[8] = {1,2,3,4,5,6,7,8};
  for(int i = 0; i<8; i++) {
    scanf("%d", arr+i);
    arr2[i] = arr[i];
  }
  for(int i=7; i>0; i--){
      for(int j=0; j<i; j++){
        if(arr2[j]<arr2[j+1]){
          tmp = arr2[j];
          arr2[j] = arr2[j+1];
          arr2[j+1] = tmp;
          tmp = seqeunce[j];
          seqeunce[j] = seqeunce[j+1];
          seqeunce[j+1] = tmp;
        }
      }
  }
  for(int i=4; i>0; i--){
      for(int j=0; j<i; j++){
        if(seqeunce[j]>seqeunce[j+1]){
          tmp = seqeunce[j];
          seqeunce[j] = seqeunce[j+1];
          seqeunce[j+1] = tmp;
        }
      }
  }
  for (int i=0; i<5; i++) {
    sum += arr[seqeunce[i]-1];
  }
  printf("%d\n", sum);
  for(int i = 0; i<5; i++) {
    printf("%d ", seqeunce[i]);
  }
  return 0;
}