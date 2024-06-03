#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
    int a, b,c,d;
    scanf("%d", &a);
    for (int i = 1; i <= 9; i++)
    {
        
        printf("%d * %d = %d\n",a,i,a*i);
    }
    
    return 0;
}
