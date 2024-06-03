#pragma warning (disable:4996)
#include <stdio.h>
#include<math.h>
int main()
{
    int n,p;
    int i = 2;
    scanf("%d %d", &n,&p);
    int ma = 1;
    int ni = 0;
    while (1)
    {
        if (n % i == 0 && p % i == 0)
        {
            ma = i;
        }
        else if (n < i || p < i)
        {
            
            break;
        }
       
        i = i + 1;
    }
    i = 1;
    while (1)
    {
        ni = ma * i;
        if (ni % n == 0 && ni % p == 0)
        {
            break;
        }
       
        i = i + 1;
    }
    printf("%d\n%d", ma, ni);
    return 0;
}