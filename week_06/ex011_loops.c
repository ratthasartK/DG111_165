
#include <stdio.h>

int main()
{
    int sum;

    // for loop
    sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("For Loop Sum = %d\n", sum);

    // while loop
    sum = 0;
    int i = 1;
    while (i <= 10)
    {
        sum += i;
        i++;
    }
    printf("While Loop Sum = %d\n", sum);

    // do-while loop
    sum = 0;
    i = 1;
    do
    {
        sum += i;
        i++;
    } while (i <= 10);

    printf("Do-While Sum = %d\n", sum);

    return 0;
}