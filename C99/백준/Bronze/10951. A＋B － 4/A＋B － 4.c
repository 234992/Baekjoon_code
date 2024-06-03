#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
    int a=1, b=1;
    int sum;
    while (1)
    {
        if (scanf("%d %d", &a, &b) == EOF) 
        {
            break;
        }
        else
        {
            
            printf("%d\n", a + b);
        }
        
    }

    return 0;
}
