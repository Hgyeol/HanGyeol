#include <stdio.h>

int main()
{
	int Score;
	scanf("%d", &Score);

	if (Score >= 90 && Score <= 100)
	{
		printf("A");
	}
	else if (Score >= 80 && Score <= 89)
	{
		printf("B");
	}
	else if (Score >= 70 && Score <= 79)
	{
		printf("C");
	}
	else if (Score >= 60 && Score <= 69)
	{
		printf("D");
	}
	else
	{
		printf("F");
	}
}
