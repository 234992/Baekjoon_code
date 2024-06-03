#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int n, m;
	int t;
	scanf("%d %d", &n, &m);
	int clo = m;
	int sum = 0;
	int card[101] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &card[i]);
	}
	for (int j = 0; j < n; j++)
	{
		for (int p = 0; p < n; p++)
		{
			for (int q = 0; q < n; q++)
			{
				sum = card[q] + card[p] + card[j];
				 if (j != p && j != q && q != p)
				{
					if (m - sum <= clo&&sum<=m)
					{
						clo = m - sum;
					}
				}
			}
		}
	}
	printf("%d", m-clo);
	return 0;
}
