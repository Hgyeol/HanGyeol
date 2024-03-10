#include <stdio.h>
#include <string.h>


int main(void)
{
  char subject[51];
  char grade[3];
  float point;
  float total = 0;
  float gradeTotal=0.0;
  for (int i = 0; i < 20; i++) {
    scanf("%s", subject);
    scanf("%f", &point);
    scanf("%s", grade);
    if(!strcmp(grade, "A+")) {
      total += point * 4.5;
      gradeTotal += point;
    }
    else if (!strcmp(grade, "A0")) {
      total += point * 4.0;
      gradeTotal += point;
    }
    else if (!strcmp(grade, "B+")) {
      total += point * 3.5;
      gradeTotal += point;
    }
    else if (!strcmp(grade, "B0")) {
      total += point * 3.0;
      gradeTotal += point;
    }
    else if (!strcmp(grade, "C+")) {
      total += point * 2.5;
      gradeTotal += point;
    }
    else if (!strcmp(grade, "C0")) {
      total += point * 2.0;
      gradeTotal += point;
    }
    else if (!strcmp(grade, "D+")) {
      total += point * 1.5;
      gradeTotal +=point;
    }
    else if (!strcmp(grade, "D0")) {
      total += point * 1;
      gradeTotal += point;
    }
    else if (!strcmp(grade, "F")) { 
      total += point * 0;
      gradeTotal += point;
    }
    else { }
    //printf("%f %f\n", total, gradeTotal);
  }
  printf("%.6f", total/gradeTotal);
  return 0;
}
