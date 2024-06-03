#pragma warning (disable:4996)
#include <stdio.h>

int main() 
{
	int a=0, b=0, x;
	int sum=0, t=1;
	int d;
	scanf("%d", &x);
	if (x == 1) { a = 1; b = 1; }
	else
	{
		for (int i = 1;; i++) {
			sum += i;
			if (x <= sum) {
				if (i % 2 == 0) {
					d = sum - x;
					a = i - d;
					b = 1 + d;
					break;
				}
				else {
					d = sum - x;
					b = i - d;
					a = 1 + d;
					break;
				}
			}
		}
	}
	printf("%d/%d", a, b);
	return 0;
}