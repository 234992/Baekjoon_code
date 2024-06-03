#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
    int a;;
    long long c, d;
    scanf("%d", &a);
    for (int i; i < a; ++i)
    {
        scanf("%lld %lld", &c, &d);
        printf("%d\n", c + d);
    }


    return 0;
}
