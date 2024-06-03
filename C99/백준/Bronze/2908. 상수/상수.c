#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int a, b;
	int n1, n2, n3;
	scanf("%d %d", &a, &b);

	n1 = a % 10;
	n2 = a / 10 % 10;
	n3 = a / 100 % 10;
	a = n1 * 100 + n2 * 10 + n3;
	
	n1 = b % 10;
	n2 = b / 10 % 10;
	n3 = b / 100 % 10;
	b = n1 * 100 + n2 * 10 + n3;

	if (a > b)
		printf("%d", a);
	else
		printf("%d", b);

	return 0;
}