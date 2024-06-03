#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
    int a;;
    int ans = 1;
    scanf("%d", &a);
    for (int i=1; i < a+1; ++i)
    {
        ans=ans*i;
    }
    printf("%d\n", ans);
    return 0;
}


