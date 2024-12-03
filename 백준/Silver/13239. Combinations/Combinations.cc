#include<stdio.h>
int main() {
    int arr[1001][1001]={0};
    for(int i = 1; i <= 1000; i++) {
	    for(int j = 0; j <= 1000; j++) {
            if(j==0) arr[i][j]=1;
	        else if(i >= j) {
	            if(i==j) arr[i][j] = 1;
	            else if(j==1) arr[i][j] = i;
	            else arr[i][j] = (arr[i-1][j-1]+arr[i-1][j])%1000000007;
	        }
	    }
	}
	int t;
	int n, r;
	scanf("%d", &t);
	while(t--) {
	    scanf("%d %d", &n, &r);
	    printf("%d\n",arr[n][r]);
	}
	return 0;
}
