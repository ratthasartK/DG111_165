#include <stdio.h>

// clamp
int clamp(int value, int min, int max);

int main(void)
{
    int hp = 150;

    int safeHP = clamp(hp, 0, 100);

    printf("HP = %d\n", hp);
    printf("MAXHP = %d\n", safeHP);

    return 0;
}

int clamp(int value, int min, int max)
{

    if (value > max)
    {
        value = max;
    }

    if (value < min)
    {
        value = min;
    }

    return value;
}
