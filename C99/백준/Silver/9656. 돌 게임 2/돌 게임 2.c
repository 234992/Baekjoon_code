#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
   //상근이가 게임을 이기면 SK를, 창영이가 게임을 이기면 CY을 출력한다.
    int a;
    scanf("%d",&a);
    if (a % 2 == 0)
        printf("SK");
    else
        printf("CY");
   
    return 0;
}


