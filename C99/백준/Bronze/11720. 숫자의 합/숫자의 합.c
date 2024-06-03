#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int n, m;
	int a,max= 0,min= 1000000;
	int temp=0;
	char num[101] = { 0 };
	scanf("%d", &n);
	scanf("%s", &num);
	for (int j = 0; j < n; j++)
	{
		
		temp += num[j]-'0';
		
	}
	printf("%d", temp);
	return 0;
}
