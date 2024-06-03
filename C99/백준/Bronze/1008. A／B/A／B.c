#pragma warning(disable:4996)
#include<stdio.h>
int main()
{
	int a, b = 0;
	scanf("%d %d", &a, &b);
	double c = ((double)a / (double)b);
	printf("%.9lf", c);

	

	return 0;
}