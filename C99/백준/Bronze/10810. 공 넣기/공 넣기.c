#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int ba[101] = { 0 };
	int n, m;
	int a,b,c;
	int temp;
	scanf("%d %d", &n, &m);
	for (int j = 1; j <= m; j++)
	{
		scanf("%d %d %d",&a,&b,&c);
		for (int i = a; i <= b; i++)
		{
			ba[i] = c;
		}
	}
	for (int k = 1; k <= n; k++)
	{
		printf("%d ", ba[k]);
	}
	return 0;
}


