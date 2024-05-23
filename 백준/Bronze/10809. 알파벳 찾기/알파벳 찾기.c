// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    char s[101];
    int abc[26]={0};
    int cnt=1;
    scanf("%s",s);
    for(int i=0; i < strlen(s); i++) {
        if(abc[s[i]-97]==0) abc[s[i]-97] = cnt;
        cnt++;
    }
    for(int i = 0; i < 26; i++) {
        if(abc[i] >0) printf("%d ",abc[i]-1);
        else printf("-1 ");
    }
    return 0;
}