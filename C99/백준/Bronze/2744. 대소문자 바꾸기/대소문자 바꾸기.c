#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    char arr[100] = { 0 };
    scanf("%s", arr);
    int len = 0;
    int as;
    for (int i = 0; i < 101; i++)
    {
        as = arr[i];
        if (as<'Z'+1)
        {
            arr[i] = arr[i] - 'A' + 'a';
        }
        else
        {
            arr[i] = arr[i] + 'A' - 'a';
        }
        if (as == 0)
        {
            printf("%s", arr);
            break;
        }
    }
    return 0;
}
