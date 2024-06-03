#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    if (a % 4 == 0)
    {
        if (a % 100 == 0)
        {
            if (a % 400 == 0)
            {
                printf("1");
            }
            else
                printf("0");
               
        }
        else
            printf("1");
    }
    else
        printf("0");
    return 0;
}
