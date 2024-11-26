#include<stdio.h>

int main() {
    int arr[31][31]={0};
    for(int i = 1; i <= 30; i++) {
	    for(int j = 1; j <= 30; j++) {
	        if(i >= j) {
	            if(i==j) arr[i][j] = 1;
	            else if(j==1) arr[i][j] = i;
	            else arr[i][j] = (arr[i-1][j-1]+arr[i-1][j]);
	        }
	    }
	}
    int t;
    scanf("%d",&t);
    while(t--) {
        int n, r;
    	scanf("%d %d", &r, &n);
    	printf("%d\n", arr[n][r]);
    }
	
	return 0;
}
