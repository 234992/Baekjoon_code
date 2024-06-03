#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>
int main()
{
    //N T N T T T T
    //T SK
    //N CY
    long long a, b;
    scanf("%lld", &a);
    b = a % 7;
    if (b == 1 || b == 3)
    {
        printf("CY");
    }
    else
    {
        printf("SK");
    }
    return 0;
}