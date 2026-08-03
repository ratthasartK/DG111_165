#include <stdio.h>

int main()
{

    int n = 4;
    // Triangle

    printf("Triangle:\n");

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // Square

    printf("\nSquare:\n");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    // Diamond
    printf("\nDiamond:\n");

    int size = 3;
    for (int i = 1; i <= size; i++)
    {

        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (int i = size - 1; i >= 1; i--)
    {

        for (int j = 1; j <= size - i; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}