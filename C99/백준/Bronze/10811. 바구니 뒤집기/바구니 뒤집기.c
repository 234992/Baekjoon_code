#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int ba[101] = { 0 };
	int n, m;
	int a, b;
	int temp;
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
	{
		ba[i] = i;
	}
	for (int j = 0; j < m; j++)
	{
		scanf("%d %d", &a, &b);
		for (int k = 0; k < (b - a)/2+1; k++)
		{
			temp = ba[a + k];
			ba[a + k] = ba[b - k];
			ba[b - k] = temp;
		}
	}
	for (int p = 0; p < n; p++)
	{
		printf("%d ", ba[p+1]);
	}
	return 0;
}


