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
	for (int j = 1; j <= m; j++)
	{
		scanf("%d %d",&a, &b);
		temp = ba[a];
		ba[a] = ba[b];
		ba[b] = temp;
	}
	for (int k = 1; k <= n; k++)
	{
		printf("%d ", ba[k]);
	}
	return 0;
}
