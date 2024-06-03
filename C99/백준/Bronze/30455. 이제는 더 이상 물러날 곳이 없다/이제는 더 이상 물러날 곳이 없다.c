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
    b = a -2;
    if (b%2==0 )
    {
        printf("Duck");
    }
    else
    {
        printf("Goose");
    }
    return 0;
}
