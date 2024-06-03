#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a * b % 2 == 0)
    {
        printf("A");
    }
    else
    {
        printf("B");
    }
    return 0;
}


