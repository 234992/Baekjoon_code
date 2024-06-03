#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
    char a=0;
    char arr[100] = { 0 };
    
    scanf("%d", &a);
    for (int i = 0; i < a; i++) 
    {
        int len = 0;
        scanf("%s", &arr);
        for (int i = 0; i < 101; i++)
        {
            if (arr[i] == 0)
            {
                break;
            }
        len += 1;
        }
        printf("%c%c\n", arr[0], arr[len-1]);

    }

    return 0;
}