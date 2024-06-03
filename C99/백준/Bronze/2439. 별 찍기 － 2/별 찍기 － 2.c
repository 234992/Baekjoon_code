#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int n,a;
	int b=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (a = 0; a < n-i-1; a++)
		{
		printf(" ");
		b = b + 1;
		}
		for(int k = 0; k <= n-b-1; k++)
			printf("*");
		printf("\n");
		b = 0;
	}

	
	return 0;
}

