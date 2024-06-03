#pragma warning (disable:4996)
#include <stdio.h>
#include <math.h>

int main() 
{
	int h, m,t;
	scanf("%d %d", &h, &m);
	scanf("%d", &t);
	int th = t / 60;
	int tm = t - th * 60;
	if (m+tm>=60)
	{
		m = m + tm - 60;
		h = h+th + 1;
	}
	else
	{
		m = m + tm;
		h = h + th;
	}
	if (h >= 24)
		h = h - 24;
	printf("%d %d", h, m);

	return 0;
}