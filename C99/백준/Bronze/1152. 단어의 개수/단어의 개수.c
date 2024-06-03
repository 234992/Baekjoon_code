#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	char ch[1000001];
	int num = 0;
	scanf("%[^\n]s", &ch);
	for (int i = 1;; i++)
	{
		if (ch[i] == ' ')
			num += 1;
		if (ch[i] == '\0') 
		{
			if (ch[i - 1] == ' ')
				num -= 1;
			break;
		}
	}
	printf("%d", num+1);
	return 0;
}