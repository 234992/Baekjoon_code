#pragma warning(disable:4996)
#include <stdio.h>

int main() {
    char string[101];

    while (1)
    {
        if (scanf("%[^\n]%*c", string) == 1)
            printf("%s\n", string);
        else
            break;
    }
}