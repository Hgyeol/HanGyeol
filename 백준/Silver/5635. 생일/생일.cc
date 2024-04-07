#include <stdio.h>
#include <malloc.h>
#include <string.h>
int main(void) {
  int n, tmp;
  scanf("%d", &n);
  int* year = (int*)malloc(sizeof(int)*n);
  int* month = (int*)malloc(sizeof(int)*n);
  int* day = (int*)malloc(sizeof(int)*n);
  char** name = (char**)malloc(sizeof(char*) * n);
  char cp_name[16];
  for(int i = 0; i < n; i++) {
    name[i] = (char*)malloc(sizeof(char) * 16);
    scanf("%s %d %d %d", name[i], &day[i], &month[i], &year[i]);
  }
  for(int i=n-1; i>0; i--){
    for(int j=0; j<i; j++){
      if(year[j]>year[j+1]){
        strcpy(cp_name, name[j+1]);
        strcpy(name[j+1], name[j]);
        strcpy(name[j], cp_name);
        tmp = year[j+1];
        year[j+1] = year[j];
        year[j] = tmp;
        tmp = month[j+1];
        month[j+1] = month[j];
        month[j] = tmp;
        tmp = day[j+1];
        day[j+1] = day[j];
        day[j] = tmp;
      }
      else if (year[j] == year[j+1]) {
        if (month[j] > month[j+1]) {
          strcpy(cp_name, name[j+1]);
          strcpy(name[j+1], name[j]);
          strcpy(name[j], cp_name);
          tmp = year[j+1];
          year[j+1] = year[j];
          year[j] = tmp;
          tmp = month[j+1];
          month[j+1] = month[j];
          month[j] = tmp;
          tmp = day[j+1];
          day[j+1] = day[j];
          day[j] = tmp;
        }
        else if (month[j]==month[j+1]) {
          if (day[j] > day[j+1]) {
            strcpy(cp_name, name[j+1]);
            strcpy(name[j+1], name[j]);
            strcpy(name[j], cp_name);
            tmp = year[j+1];
            year[j+1] = year[j];
            year[j] = tmp;
            tmp = month[j+1];
            month[j+1] = month[j];
            month[j] = tmp;
            tmp = day[j+1];
            day[j+1] = day[j];
            day[j] = tmp;
          }
        }
      }
    }
  }
  printf("%s\n%s", name[n-1], name[0]);
  return 0;
}