#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);
    printf("%d",year % 400 == 0 || (year%4==0&&year%100!=0) ? 1 : 0);
    return 0;
}
