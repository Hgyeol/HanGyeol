#include <stdio.h>
int main() { 
  int c; 
  scanf("%d", &c); 
  int n,m,k,d,b,s,t; 
  for(int i = 0;i<c;i++){ 
    scanf("%d %d %d %d", &n,&m,&k,&d); 
    s = n * m;
    t = (s * (m-1) * k + s * (s-m)) / 2; 
    b = d / t; 
    if(b == 0){ 
      printf("-1\n"); 
    } 
    else{ 
      printf("%d\n", t * b); 
    } 
  } 
  return 0; 
}