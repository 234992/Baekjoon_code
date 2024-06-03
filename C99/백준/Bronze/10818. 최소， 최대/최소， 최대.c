#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int n, m;
	int a,max= -1000000,min= 1000000;
	int temp;
	scanf("%d", &n);
	for (int j = 1; j <= n; j++)
	{
		scanf("%d",&a);
		if (a > max)
			max = a;
		if (min > a)
			min = a;
	}
	printf("%d %d", min, max);
	return 0;
}
