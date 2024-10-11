#include <stdio.h>
int main() {
	long long int arr[301][301];
	int n, m;
	scanf("%d%d",&n,&m);
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			scanf("%d",&arr[i][j]);
			arr[i][j] += arr[i][j-1];
		}
	}
	// for(int i = 1; i <= n; i++, puts("")) {
	// 	for(int j = 1; j <= m; j++) {
	// 		printf("%d ",arr[i][j]);
	// 	}
	// }
	int x1,y1,x2,y2;
	int k;
	long long int res;
	scanf("%d", &k);
	while(k--) {
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		res=0;
		for(int i = x1; i <= x2; i++) {
			res += arr[i][y2];
			res -= arr[i][y1-1];
		}
		printf("%d\n",res);
	}
	return 0;
}
