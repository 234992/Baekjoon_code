#pragma warning (disable:4996)
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int count = 0;
    int fa = 0;
    int fb = 0;
    scanf("%d", &n);

    
        if (n >= 125)
        {
            fa = n / 5;
            count += fa;
            fb = n / 25;
            count += fb;
            fa = n / 125;
            count += fa;
        }
        else if (n >= 25)
        {
            fa = n / 5;
            count += fa;
            fb = n / 25;
            count += fb;
        }
        else if (n >= 5)
        {
            fa = n / 5;
            count += fa;
           
        }
        
    
    printf("%d", count);
    return 0;
}
