#include <stdio.h>
#include<string.h>
#include <stdlib.h>

typedef struct Woosung {
    int age;
    char name[101];
}woosung;

int static compare (const void* first, const void* second)
{
    woosung A = *(woosung *)first;
    woosung B = *(woosung *)second;
    if (A.age > B.age)
        return 1;
    else if (A.age < B.age)
        return -1;
    else
        return 0;
}

int main() {
    woosung woo[100000] = {0};
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i< n; i++) {
        scanf("%d %s", &woo[i].age, woo[i].name);
    }
    
    qsort(woo, n, sizeof(woosung), compare);
    
    for(int i = 0; i < n; i++) {
        printf("%d %s\n", woo[i].age, woo[i].name);
    }
    return 0;
}