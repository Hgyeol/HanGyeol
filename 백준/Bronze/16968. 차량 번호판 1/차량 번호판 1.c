#include <stdio.h>

int main(void) {
  char n[5];
  int i=0, j, result=1;
  scanf("%s", n);
  while(n[i]!='\0') {
        if(n[i]=='c') result*=26;
        else result*=10;
        while(n[i]==n[i+1]) {
            if(n[i]=='c') result*=25;
            else result*=9;
            i++;
        }
        i++;
  }
  printf("%d", result);
}