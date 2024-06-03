#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    char arr[2] = { 0 };
    scanf("%s", arr);
    double res = 0.0;
    switch (arr[0])
    {
        case'A':
            res += 4;
            break;
        case'B':
            res += 3;
            break;
        case'C':
            res += 2;
            break;
        case'D':
            res += 1;
            break;
        default:
            break;
    }
    switch (arr[1])
    {
    case'+':
        res += 0.3;
        break;
    case'0':
        
        break;
    case'-':
        res -= 0.3;
        break;
    default:
        break;
    }
    printf("%.1lf", res);
    return 0;
}