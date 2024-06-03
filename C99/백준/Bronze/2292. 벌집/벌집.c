#pragma warning(disable:4996)
#include <stdio.h>

long long main()
{
//1 7 19  37  61  기준이 6*n 씩 증가
    long long n;
    long long min = 0;
    long long t;
    scanf("%lld", &n);
    t = n-2;
    if (n == 1)
    {
        printf("1");
        return 0;
    }
    for(long long i = 1; i <= n; i++)
    {
        t = t - 6 * i;
        if (t < 0)
        {
            min = i;
            break;
        }
    }
    printf("%lld", min+1);


    return 0;
}
