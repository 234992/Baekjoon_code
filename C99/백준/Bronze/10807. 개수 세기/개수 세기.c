#include <stdio.h>
int main(void) 
{
    int a, b;
    int count = 0;
    scanf("%d", &a);
    int arr[111];

    for (int i = 0; i < a; i++) 
    {
        
        scanf("%d", &arr[i]);
      
    }
    scanf("%d", &b);
    for (int j = 0; j < a ; j++)
    {
        if (arr[j] == b)
            count += 1;
    }

    printf("%d", count);
    return 0;
}
