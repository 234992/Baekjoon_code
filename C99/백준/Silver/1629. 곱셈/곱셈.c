#pragma warning (disable:4996)
#include <stdio.h>

long long multiply(long long a, long long b, long long c) 
{
    if (b == 1) return a % c;
    if (b % 2 == 0) 
    {
        long long temp = multiply(a, b / 2, c) % c;
        return (temp * temp) % c;
    }
    else 
    {
        return (a * multiply(a, b - 1, c)) % c;
    }
}

int main()
{
    long long A, B, C;
    scanf("%lld %lld %lld", &A, &B, &C);
    long long result = multiply(A, B, C);
    printf("%lld\n", result);

    return 0;
}