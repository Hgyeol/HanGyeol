// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    char s[51];
    int result = 0;
    scanf("%s", s);
    for(int i = 0; i < strlen(s); i++) {
        if(i == 0) result+=10;
        else {
            if(s[i-1]==s[i]) result += 5;
            else result += 10;
        }
    }
    printf("%d", result);
    return 0;
}