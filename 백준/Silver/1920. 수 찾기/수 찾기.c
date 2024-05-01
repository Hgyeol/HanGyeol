#include <stdio.h>
#include<stdlib.h>
int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

/*int binary(int* arr ,int str, int end, int f) {
    /*int mid = (str +end)/2;
    if(end <= str) return 0;
    if(arr[mid] == f) return 1;
    else if (arr[mid] > f) {
        return binary(arr, mid + 1, end, f);
    }
    else {
        return binary(arr, str, mid-1, f);
    }
    while (str <= end) {
        int mid = (str +end)/2;
        if(arr[mid] == f) return 1;
        else if (arr[mid] > f) {
            str = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return 0;
    
}*/

int binsearch(int data[], int n, int key) {
    int low, high;
    int mid;
 
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (key == data[mid]) {            //탐색 성공
            return 1;        
        }
        else if (key < data[mid]) {        //탐색 범위를 아래쪽으로
            high = mid - 1;
        }
        else if (key > data[mid]) {        //탐색 범위를 위쪽으로
            low = mid + 1;
        }
    }
    return 0;                            //탐색 실패
}


int main() {
    int n, m, num;
    int arr[100001] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    qsort(arr, n, sizeof(int), compare); 
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &num);
        printf("%d\n", binsearch(arr, n, num));
    }
    return 0;
}
