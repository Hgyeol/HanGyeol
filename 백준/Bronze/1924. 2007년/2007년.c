#include <stdio.h>

int main(void) {
  int month, day, rd = 0;
  scanf("%d%d", &month, &day);
  rd += day;
  for(int i = 1; i < month; i++) {
      if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i ==12) rd+=31;
      else if (i == 2) rd+= 28;
      else rd += 30;
  }
  
  rd %= 7;
  
  switch (rd) {
        case 1:
            printf("MON");
            break;
        case 2:
            printf("TUE");
            break;
        case 3:
            printf("WED");
            break;
        case 4:
            printf("THU");
            break;
        case 5:
            printf("FRI");
            break;
        case 6:
            printf("SAT");
            break;
        default:
            printf("SUN");
  }
  
  return 0;
}