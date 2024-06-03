#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int n, m;
	int a,max= 0,min= 1000000;
	int temp;
	
	for (int j = 1; j <= 9; j++)
	{
		scanf("%d",&a);
		if (a > max)
		{
			max = a;
			temp = j;
		}
		
	}
	printf("%d\n%d", max, temp);
	return 0;
}
