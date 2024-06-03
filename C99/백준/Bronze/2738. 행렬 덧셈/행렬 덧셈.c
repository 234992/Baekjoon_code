#pragma warning(disable:4996)
#include <stdio.h>
int main()
{
    int n, m;
    int h1[101][101];
    int h2[101][101];
    int h3[101][101];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &h1[i][j]);
        }
    }
    for (int i = n; i < n + n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &h2[i - n][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
        {
            h3[i][j] = h1[i][j] + h2[i][j];
            printf("%d ", h3[i][j]);

        }
        printf("\n");
    }


    

    return 0;
}


