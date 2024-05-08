// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[1000001] = {0};
    int str, end;
    scanf("%d%d", &str, &end);
    
    for(int i = 2; i <= end; i++) {
        if(arr[i]!=1) {
            for(int j = 2 * i; j <= end; j+=i) {
                arr[j] = 1;
            }
        }
    }
    arr[1] = 1;
    for (int i = str;i <= end;i++) {
		if (arr[i]==0) {
			printf("%d\n", i);
		}
	}
    return 0;
}