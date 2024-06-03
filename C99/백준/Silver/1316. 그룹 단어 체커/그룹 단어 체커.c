#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	int n;
	char grpword[101];
	char retword[101];
	int not = 0;
	int t = 0;
	int temp = 1;
	int wordnum = 0;
	int otherle = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		otherle = 0;
		t = 0;
		temp = 1;
		not = 0;
		scanf("%s", &grpword);
		while (1)
		{
			retword[t] = grpword[t];
			while (not!=1)
			{
				if (retword[t] != grpword[temp]) otherle = 1;
				if (retword[t] == grpword[temp] && otherle == 1)
				{
					not = 1;
					break;
				}
				if (grpword[temp] == '\0') break;
				temp++;
			}
			otherle = 0;
			t++;
			if (grpword[t] == '\0' && not == 0) wordnum++;
			if (grpword[t] == '\0') break;
			temp = t + 1;
		}
	}
	printf("%d", wordnum);
	return 0;
}