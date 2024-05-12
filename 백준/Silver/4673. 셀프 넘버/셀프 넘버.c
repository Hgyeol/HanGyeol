#include<stdio.h>

int chk[10001];

void self(int k)
{
	int res = k;
	while(k)
	{
		res = res + k % 10;
		k = k / 10;
	}
	chk[res]++;
}

int main() {
	for(int i = 1; i <= 10000; i++) self(i);

	for(int i = 1; i <= 10000; i++) if(chk[i] == 0)printf("%d\n", i);
	return 0;
}
