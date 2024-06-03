#pragma warning (disable:4996)
#include <stdio.h>
#include<math.h>
int main()
{
    int n,p;
    scanf("%d", &n);
    int max = 0;
    double avg = 0;
    int poi[1001] = { 0 };
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p);
        poi[i] = p;
        if (p >= max)
        {
            max = p;
        }
        
    }
    for (int j = 0; j < n; j++)
    {
        avg += (double)poi[j]/ max ;
    }
    printf("%lf", avg*100/n);
    return 0;
}