#include <stdio.h>
#include <string.h>


int main(void)
{
  char word[101];
  scanf("%s", word);
  int len = strlen(word);
  int cnt=0;
  for (int i = 0; i<len; i++) {
    if (word[i] == 'c' || word[i] == 's' || word[i] == 'z') {
      if (word[i+1] == '-' || word[i+1] == '=') {
        cnt++;
      }
    }
    else if (word[i] == 'n' || word[i] == 'l') {
      if (word[i+1] == 'j') {
        cnt++;
      }
    } 
    else if (word[i] == 'd') {
      if (word[i+1] == '-') cnt++;
      else if (word[i+1] == 'z' && word[i+2] == '=') cnt++;
    }
  }
  printf("%d",len- cnt);
  return 0;
}
