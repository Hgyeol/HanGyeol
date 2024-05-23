#include <stdio.h>

int main()
{
    int hour, minute;
    scanf("%d%d", &hour, &minute);
    hour = (1440+hour*60+minute-45)/60%24;
    minute = (1440+minute-45)%60;
    printf("%d %d", hour, minute);
    return 0;
}
