#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d\n%d", &a,&b);
    if (a > 0)
    {
        if (b > 0)
        {
            printf("1");
        }
        else
        {
            printf("4");
        }
    }
    if (a < 0)
    {
        if (b > 0)
        {
            printf("2");
        }
        else
        {
            printf("3");
        }
    }
    return 0;
}
