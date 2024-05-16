// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    char n1[100001];
    char n2[100001];
    char res[100001];
    int c=0, len1, len2, sub1, sub2, big, ridx=0;
    scanf("%s %s", n1, n2);
    big = sub1 = len1 = strlen(n1);
    sub2 = len2 = strlen(n2);
    if(big < len2) big = len2;
    sub1--;
    sub2--;
    for(int i = 0; i < big; i++) {
        ridx += c;
        if(sub1 > -1) {
            ridx += n1[sub1] - 48;
            c += n1[sub1]-48;
        }
        if(sub2 > -1) {
            ridx += n2[sub2] - 48;
            c += n2[sub2]-48;
        }
        res[i] = (ridx%10) + 48;
        c /= 10;
        sub1--;
        sub2--;
        ridx = 0;
    }
    res[big] = c+48;
    if(res[big] != 48) printf("%c", res[big]); 
    for(int i = big-1; i > -1; i--) {
        printf("%c", res[i]);
    }
    return 0;
}