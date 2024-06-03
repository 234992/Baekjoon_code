#pragma warning (disable:4996)
#include <stdio.h>
#include <math.h>

int main() 
{
	int h, m,t;
	scanf("%d %d %d", &h, &m, &t);
	int max = 0;
	if (h == m && t == m && t == h)
		printf("%d", 10000 + m * 1000);
	else if (h == m)
		printf("%d", 1000 + m * 100);
	else if (h == t)
		printf("%d", 1000 + t * 100);
	else if (t == m)
		printf("%d", 1000 + m * 100);
	else
	{
		if (h > m)
			max = h;
		else 
			max = m;
		if (max > t);
			
		else
			max = t;
		printf("%d",  max * 100);
	}

	return 0;
}