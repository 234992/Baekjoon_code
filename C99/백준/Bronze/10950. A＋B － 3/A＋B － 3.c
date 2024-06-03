#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
    int a, b,c,d;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d %d",&c,&d);
        printf("%d\n", c + d);
    }
    
    return 0;
}

