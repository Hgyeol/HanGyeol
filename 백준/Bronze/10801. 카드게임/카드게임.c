// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int A[10];
    int B[10];
    int ac = 0, bc = 0;
    for(int i = 0; i < 10; i++) {
        scanf("%d", A+i);
    }
    for(int i = 0; i < 10; i++) {
        scanf("%d", B+i);
    }
    for(int i = 0; i < 10; i++) {
        if(A[i] > B[i]) ac++;
        else if (B[i] > A[i]) bc++;
    }
    if(ac > bc) printf("A");
    else if (bc > ac) printf("B");
    else printf("D");
    return 0;
}