#include <stdio.h>
#include<malloc.h>
int main() {
    int n, max = 0;
    double avg=0, sum = 0;
    scanf("%d", &n);
    int* scores = (int*)malloc(sizeof(int)*n);
    for(int i = 0; i < n; i++) {
        scanf("%d", scores+i);
        if(max < scores[i]) {
            max = scores[i];
        }
    }
    for(int i = 0; i < n; i++) {
        sum+=((double)scores[i]/max)*100;
    }
    printf("%lf", sum/n);
    return 0;
}