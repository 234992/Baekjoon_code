#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>
long long a, b;
long long ab(long long x, long long y)
{
    return (x + y) * (x - y);
}
int main()
{
    scanf("%lld %lld", &a, &b);
    printf("%lld", ab(a, b));
    return 0;
}

