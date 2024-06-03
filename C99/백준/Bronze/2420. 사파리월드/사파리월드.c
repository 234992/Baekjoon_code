#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
    long long a, b;
    scanf("%lld %lld", &a,&b);
    a - b < 0 ? printf("%lld", b - a) : printf("%lld", a - b);
    
    return 0;
}
