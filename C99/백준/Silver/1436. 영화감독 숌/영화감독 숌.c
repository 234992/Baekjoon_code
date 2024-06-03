#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	int count = 0;
	int num = 0;
	int a = 666;
	int t,temp;
	while (1) {
		t = a;
		while(1){
			temp = t % 10;
			if (temp == 6) count++;
			else count = 0;
			if (count == 3) break;
			if (t < 10) break;
			t = t / 10;
		}
		if (count == 3) num++;
		if (num == N) { printf("%d", a); break;}
		count = 0;
		a++;
	}
	

	return 0;
}
