#pragma warning (disable:4996)
#include <stdio.h>
#include <math.h>

int main() 
{
	int h, m;
	scanf("%d %d", &h, &m);
	if (m - 45 < 0)
	{
		m = m + 15;
		h = h - 1;
		if (h < 0)
			h = h + 24;
	}
	else
		m = m - 45;
	printf("%d %d", h, m);

	return 0;
}
