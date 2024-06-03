#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
	char let[105] = { 0 };
	scanf("%s", &let);
	int lnum = 0;
	int i = 0;
	while (1)
	{
		if (let[i] == '\0')
			break;
		if (let[i] >= 'a' && let[i] <= 'z')
		{
			switch (let[i])
			{
			case 'c':
				if (let[i + 1] == '-')
				{
					i += 2;
					lnum += 1;
				}
				else if (let[i + 1] == '=') 
				{
					i += 2;
					lnum += 1;
				}
				else
				{
					i += 1;
					lnum += 1;
				}
				break;
			case 'd':
				if (let[i + 1] == '-')
				{
					i += 2;
					lnum += 1;
				}
				else if (let[i + 1] == 'z')
				{
					if (let[i + 2] == '=')
					{
						i += 3;
						lnum += 1;
					}
					else
					{
						i += 2;
						lnum += 2;
					}
				}
				else
				{
					i += 1;
					lnum += 1;
				}
				break;
			case 'l':
				if (let[i + 1] == 'j')
				{
					i += 2;
					lnum += 1;
				}
				else
				{
					i += 1;
					lnum += 1;
				}
				break;
			case 'n':
				if (let[i + 1] == 'j')
				{
					i += 2;
					lnum += 1;
				}
				else
				{
					i += 1;
					lnum += 1;
				}
				break;
			case 's':
				if (let[i + 1] == '=')
				{
					i += 2;
					lnum += 1;
				}
				else
				{
					i += 1;
					lnum += 1;
				}
				break;
			case 'z':
				if (let[i + 1] == '=')
				{
					i += 2;
					lnum += 1;
				}
				else
				{
					i += 1;
					lnum += 1;
				}
				break;
			default:
				i += 1;
				lnum += 1;
				break;
			}
		}
		else
			i += 1;
	}
	printf("%d", lnum);
	return 0;
}