#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int n,num;
    int sum = 0;
    int tn = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num == 2)
        {
            sum += 1;
        }
        else if (num%2==0)
        {
           
        }
        else
        {
            for (int j = 2; j <= num+1; j++)
            {
                if (num % j == 0)
                {
                    tn += 1;
                }
            }
            if (tn == 1)
            {
                sum += 1;
                
            }
            tn = 0;
        }
    }
    printf("%d", sum);
    
    return 0;
}