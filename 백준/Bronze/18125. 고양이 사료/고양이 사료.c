// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int r,c, num, check=0;
    int house[100][100];
    int student[100][100];
    scanf("%d%d", &r, &c);
    for(int i = c-1; i >= 0; i--) {
        for(int j = 0; j < r; j++) {
            scanf("%d", &house[j][i]);
        }
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &student[i][j]);
        }
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(student[i][j]!=house[i][j]) {
                check=1;
                break;
            }
        }
        if(check) break;
    }
    if(check) {
        printf("|>___/|     /}\n");
        printf("| O O |    / }\n");
        printf("( =0= )\"\"\"\"  \\\n");
        printf("| ^  ____    |\n");
        printf("|_|_/    ||__|\n");
    }
    else {
        printf("|>___/|        /}\n");
        printf("| O < |       / }\n");
        printf("(==0==)------/ }\n");
        printf("| ^  _____    |\n");
        printf("|_|_/     ||__|\n");
    }
    return 0;
}