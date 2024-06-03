#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int M, N;
	scanf("%d %d", &N, &M);
	char white[9][9];
	char black[9][9];
	char board[51][51];
	int flag2 = 0;
	int wsum = 0;
	int bsum = 0;
	int min = 0;
	int ans = 0;
	int flag = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (flag == 0) { white[i][j] = 'W'; black[i][j] = 'B'; flag = 1; }
			else if (flag == 1) { white[i][j] = 'B'; black[i][j] = 'W'; flag = 0; }
		}
		if (flag == 0) flag = 1;
		else if (flag == 1) flag = 0;
	}

	for (int i = 0; i < N; i++) {
		scanf("%s", &board[i]);
	}

	
	for(int n=0;n<N-7;n++){
		for(int m=0;m<M-7;m++){
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 8; j++) {
					if (board[n+i][m+j] != black[i][j]) bsum++;
					if (board[n+i][m+j] != white[i][j]) wsum++;
				}
			}
			if (bsum > wsum) min = wsum;
			else min = bsum;
			if (flag2 == 0) { ans = min; flag2 = 1; }
			else if (ans > min) ans = min;
			bsum = 0; wsum = 0; 
		}
	}

	printf("%d", ans);

	return 0;
}