#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int n,num;
    int sum = 0;
    int tn = 0;
    scanf("%d", &n);
    int s = 0;
    for (int i = 1; i < n; i++)
    {
        if (i >= 100000)
        {
            sum = i+i % 10 + i / 10 % 10 + i / 100 % 10 + i / 1000 % 10 + i / 10000 % 10 + i / 100000 % 10;
        }
        else if (i >= 10000)
        {
            sum = i + i % 10 + i / 10 % 10 + i / 100 % 10 + i / 1000 % 10 + i / 10000 % 10 ;
        }
        else if (i >= 1000)
        {
            sum = i + i % 10 + i / 10 % 10 + i / 100 % 10 + i / 1000 % 10 ;
        }
        else if (i >= 100)
        {
            sum = i + i % 10 + i / 10 % 10 + i / 100 % 10 ;
        }
        else if (i >= 10)
        {
            sum = i + i % 10 + i / 10 % 10 ;
        }
        else 
        {
            sum = i + i % 10 ;
        }

        if (sum == n)
        {
            s = i;
            break;
        }
        sum = 0;
    }
    if (s != 0)
    {
        printf("%d", s);
    }
    else
        printf("0");
    
    return 0;
}