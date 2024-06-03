#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int a,b,c;
    int max;
    int n, m;
    while (1)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0)
            break;
        if (a > b)
        {
            max = a;
            n = b;
        }
        else
        {
            max = b;
            n = a;
        }

        if (max > c)
        {
            m = c;
        }
        else
        {
            m = max;
            max = c;
        }
        if (n*n+m*m==max*max)
        {
            printf("right\n");
        }
        else
            printf("wrong\n");
    }
   
    return 0;
}