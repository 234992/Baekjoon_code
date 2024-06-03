#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>
int main()
{
    //T N T T T T N
    //T SK
    //N CY
    long long a, b;
    scanf("%lld", &a);
    b = a % 7;
    if (b == 2 || b == 0)
    {
        printf("CY");
    }
    else
    {
        printf("SK");
    }
    return 0;
}

