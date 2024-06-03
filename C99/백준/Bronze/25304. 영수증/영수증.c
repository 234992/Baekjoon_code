#pragma warning (disable:4996)
#include <stdio.h>
#include <math.h>

int main() 
{
	int n,b;
	long long x,a;
	scanf("%lld", &x);
	scanf("%d", &n);
	long long sum = 0;
	for (int i = 1; i <= n; i++)
	{
		scanf("%lld %d", &a,&b);
		sum = sum+a*b ;
	}
	if (sum == x)
		printf("Yes");
	else
		printf("No");
	return 0;
}




