#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int b5 = N / 5, b3 = 0;
	int temp = N % 5;
	while (1) {
		if (temp % 3 == 0) { b3 = temp / 3; printf("%d", b5 + b3); break; }
		else {
			temp += 5;
			b5 -= 1;
			if (b5 < 0) { printf("-1"); break; }
		}
	}
	

	return 0;
}