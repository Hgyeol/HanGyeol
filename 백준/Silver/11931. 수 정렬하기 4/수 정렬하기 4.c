// Online C compiler to run C program online
#include <stdio.h>

int res[1000001] = {0};

void merge(int* arr, int str, int mid, int end) {
    int i, j, k;
    i = str;
    j = mid + 1;
    k = str;
    
    while(i <= mid && j <= end) {
        if(arr[i] >= arr[j]) {
            res[k] = arr[i];
            i++;
        }
        else {
            res[k] = arr[j];
            j++;
        }
        k++;
    }
    
    if(i > mid) {
        for(int t = j; t <= end; t++) {
            res[k] = arr[t];
            k++;
        }
    }
    else {
        for(int t = i; t <= mid; t++) {
            res[k] = arr[t];
            k++;
        }
    }
    
    for(int t = str; t <= end; t++) {
        arr[t] = res[t];
    }
    
}

void sort (int* arr, int str, int end) {
    if(str < end) {
        int mid = (str +  end) / 2;
        sort(arr, str, mid);
        sort(arr, mid + 1, end);
        merge(arr, str, mid, end);
    }
}

int main() {
    int n;
    int arr[1000001] = {0};
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    sort(arr, 0, n-1);
    for(int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}