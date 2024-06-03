#pragma warning (disable:4996)
#include <stdio.h>

int main() 
{
	int a1,a0;
	int c, n0;
	scanf("%d %d", &a1,&a0);
	scanf("%d", &c);
	scanf("%d", &n0);
	int f1 = c - a1;
	if (f1 < 0) printf("0");
	else {
		if(f1*n0-a0>=0) printf("1");
		else printf("0");
	}

	return 0;
}