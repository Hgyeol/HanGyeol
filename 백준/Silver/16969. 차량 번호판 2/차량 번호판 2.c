#include <stdio.h>

int main(void) {
  char n[1000001];
  int i=0;
  long long int result=1;
  scanf("%s", n);
  while(n[i]!='\0') {
        if(n[i]=='c') result*=26;
        else result*=10;
        result%=1000000009;
        while(n[i]==n[i+1]) {
            if(n[i]=='c') result*=25;
            else result*=9;
            result%=1000000009;
            i++;
        }
        i++;
  }
  printf("%d", result);
}