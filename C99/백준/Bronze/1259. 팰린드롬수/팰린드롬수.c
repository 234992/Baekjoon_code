#pragma warning (disable:4996)
#include <stdio.h>
#include<math.h>
int main()
{
    int n;
    int n1, n2, n3, n4, n5;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        else if (n >= 10000)
        {
            n1 = n % 10;
            n2 = n / 10 % 10;
            n3 = n / 100 % 10;
            n4 = n / 1000 % 10;
            n5 = n / 10000 % 10;
            if (n1!=0&&n == n1 * 10000 + n2 * 1000 + n3 * 100 + n4 * 10 + n5)
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }
        }
        else if (n >= 1000)
        {
            n1 = n % 10;
            n2 = n / 10 % 10;
            n3 = n / 100 % 10;
            n4 = n / 1000 % 10;

            if (n1 != 0 && n == n1 * 1000 + n2 * 100 + n3 * 10 + n4 * 1)
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }
        }
        else if (n >= 100)
        {
            n1 = n % 10;
            n2 = n / 10 % 10;
            n3 = n / 100 % 10;

            if (n1 != 0 && n == n1 * 100 + n2 * 10 + n3 * 1)
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }
        }
        else if (n >= 10)
        {
            n1 = n % 10;
            n2 = n / 10 % 10;

            if (n1 != 0 && n == n1 * 10 + n2 * 1)
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }
        }
        else
            printf("yes\n");
    }
    return 0;
}