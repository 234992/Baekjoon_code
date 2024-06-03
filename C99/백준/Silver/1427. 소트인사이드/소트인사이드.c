#pragma warning (disable:4996)
#include <stdio.h>

int main() 
{
	int N;

	char arr[11]={0};
	int num[11] = { 0 };
	int t = 0;
	char temp;
	
	scanf("%s", &arr[0]);
	for (int i = 0;; i++) {
		if (arr[i] == '\0') break;
		temp = '0';
		for (int j = 0;; j++) {
			if (arr[j] == '\0') break;
			else if (arr[j] > temp) { temp = arr[j]; N = j; }
		}
		printf("%c", temp);
		arr[N] = '0';
	}
		
	

	return 0;
}