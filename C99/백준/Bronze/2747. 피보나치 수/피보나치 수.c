#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int fibo[46] = { 0,1, };
	for (int i = 0; i < n; i++)
	{
		fibo[i + 2] = fibo[i + 1] + fibo[i];
	}
	printf("%d", fibo[n]);

	return 0;
}