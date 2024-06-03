#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int nu[11] = { 0 };
	int re[11] = { 0 };
	int n, m;
	int a=0, b=0;
	int temp = 0;


	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &n);
		nu[i] = n%42;
	}

	for (int j = 1; j <= 10; j++)
	{
		a = 0;
		for (int k = 1; k <= j;k++)
		{
			
			if (nu[j] == nu[k] && j != k)
			{ 
				
				break;
			}
			a += 1;
			if (a == j)
				temp += 1;
		}
	}
	
	printf("%d", temp);
	return 0;
}

