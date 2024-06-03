#pragma warning (disable:4996)
#include <stdio.h>

int main() 
{
	int paper[101][101] = { 0 };
	int x, y, n,a=0,b=0;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d %d", &x, &y);
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				paper[x + j][y + k] = 1;
			}
		}
	}
	for (int j = 0; j < 101; j++) {
		for (int k = 0; k < 101; k++) {
			if (paper[j][k] == 1) sum++;
		}
	}
	printf("%d", sum);
	return 0;
}