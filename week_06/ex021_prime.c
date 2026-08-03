#include <stdio.h>

int main()
{

    int n;
    int isPrime = 1;
    int divisor = 0;

    printf("Enter a  positive number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                divisor = i;
                break;
            }
        }
    }

    if (isPrime)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number. It is divisible by %d.\n", n, divisor);
    }

    return 0;
}