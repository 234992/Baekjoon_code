#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	char major[65];
	double sum = 0;
	int time = 0;
	int tsum = 0;
	int pnp = 0;
	double grade = 0;
	double avg = 0;
	int t = 0;
	int temp = 0;

	for(int i=0;i<20;i++) 
	{
		fgets(major, sizeof(major),stdin);
		while (major[t] != '\0')
		{
			if (major[t] == ' '&& temp == 0)
			{
				time = major[t + 1] - '0';
				temp = 1;
			}
			else if (major[t] == ' ' && temp == 1)
			{
				switch (major[t + 1])
				{
				case 'A':
					grade += 4;
					tsum += time;
					break;
				case 'B':
					grade += 3;
					tsum += time;
					break;
				case 'C':
					grade += 2;
					tsum += time;
					break;
				case 'D':
					grade += 1;
					tsum += time;
					break;
				case 'P':
					pnp += 1;
					break;
				default:
					tsum += time;
					break;
				}
				if (major[t + 2] == '+') grade += 0.5;
			}
			t++;
		}
		sum += grade * time;
		grade = 0;
		time = 0;
		t = 0;
		temp = 0;
	}
	avg = sum / tsum ;
	printf("%lf", avg);
	return 0;
}