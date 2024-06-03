#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int arr[31] = { 0 };
    int a;
    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &a);
        arr[a] = 1;
    }
    for (int i = 1; i < 31; i++)
    {
        int b = arr[i];
        if (b==0)
        {
            printf("%d\n",i);
        }
           
    }
    return 0;
}

