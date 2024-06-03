#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int n;
	double a;
	scanf("%d", &n);
	a = (double)n / 4;
	for(int i=0;i<a;i++)
		printf("long ");

	printf("int");
	return 0;
}

