#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
    int a, b;
    int c;
    scanf("%d %d", &a, &b);
    for (int i = 1; i < a+1; i++)
    {
        scanf("%d", &c);
            if (b > c)
            {
                printf("%d ", c);
            }

    }

    return 0;
}
