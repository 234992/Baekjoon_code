#pragma warning(disable:4996)
#include <stdio.h>
#include<math.h>
int main()
{
    long long n;
    int op = 0;
    scanf("%lld", &n);
    if (n == 1 || n == 2)
    {
        printf("1");
    }
    else 
{
    for (int i = 1; i < n; i++)
    {
        double b = pow(i, 2);
        int c = b;
        if (c > n)
        {
            printf("%d", i - 1);
            break;
        }
    }
}
    return 0;
}