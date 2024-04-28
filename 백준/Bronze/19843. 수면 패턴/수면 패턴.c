#include <stdio.h>
#include<string.h>
int main() {
  int total, hour1, hour2, n, j1, j2;
  char day1[4], day2[4];
  char days[5][4] ={
    "Mon", "Tue", "Wed", "Thu", "Fri"
  };
  scanf("%d%d", &total, &n);

  for(int i = 0; i < n; i++) {
    scanf("%s%d%s%d", day1, &hour1, day2, &hour2);
    for(int i = 0; i<5; i++) {
      if(strcmp(day1, days[i])==0) {
        j1 = i;
      }
      if(strcmp(day2, days[i])==0) {
        j2 = i;
      }
    }
    if(j1==j2) {
      total -= hour2 - hour1;
    }
    else {
      total -= (j2-j1-1)*24 + hour2 + (24-hour1);
    }
  }
  if (total > 48) printf("-1");
  else if (total > 0) printf("%d", total);
  else printf("0");
  return 0;
}
