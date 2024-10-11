#include<stdio.h>
int main() {
	int n, m, x,y;
	scanf("%d%d", &n, &m);
	int num = n*n;
	int le=1, te=1, be=n, re=n;
	int arr[1000][1000];
	while(num>=1) {
	    for(int i = te; i <= be && num>=1; i++) {
			arr[i][le] = num--;
			if(arr[i][le] == m) {
			    x = i;
			    y = le;
			}
		}
		le++;
		for(int j = le; j <= re && num>=1; j++) {
			arr[be][j] = num--;
			if(arr[be][j] == m) {
			    x = be;
			    y = j;
			}
		}
		be--;
		for(int i = be; i >= te && num>=1; i--) {
			arr[i][re] = num--;
			if(arr[i][re] == m) {
			    x = i;
			    y = re;
			}
		}
		re--;
		for(int j = re; j >= le && num>=1; j--) {
			arr[te][j] = num--;
			if(arr[te][j] == m) {
			    x = te;
			    y = j;
			}
		}
		te++;
	}
	for(int i = 1; i <= n; i++, puts("")) {
		for(int j = 1; j <= n; j++) {
			printf("%d ", arr[i][j]);
		}
	}
	printf("%d %d", x, y);
	return 0;
}    