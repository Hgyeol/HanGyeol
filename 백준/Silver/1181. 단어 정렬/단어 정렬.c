// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
#include <stdlib.h>

int compare (const void* first, const void* second) {
    if(strlen((const char*)first) > strlen((const char*)second)) {
        return 1;
    }
    else if(strlen((const char*)first) < strlen((const char*)second)) {
        return -1;
    }
    else return strcmp((char *)first, (char *)second);
}
int main() {
    char arr[20000][51];
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    
    for(int i = 0; i < n; i++) {
        if(strcmp(arr[i],arr[i+1])!=0)printf("%s\n",arr[i]);
    }
    return 0;
}