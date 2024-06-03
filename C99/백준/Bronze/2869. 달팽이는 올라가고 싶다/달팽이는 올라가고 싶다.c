#pragma warning (disable:4996)
#include <stdio.h>
#include <math.h>

int main()
{
    long long A,B,V;
    scanf("%lld %lld %lld",&A,&B,&V);
    long long h = A - B;
    double t = 0;
    if (A >= V)
    {
        printf("1");
    }
    else
    {
        t = (double)(V - A) / (double)h;
        if (t - (int)t > 0)
            printf("%d", (int)t + 2);
        else
            printf("%d", (int)t + 1);;
    }
    
    return 0;
}


