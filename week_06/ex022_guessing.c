#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    // 1 set seed for random number generation
    srand(time(NULL));
    // 2 generate a random number between 1 and
    int target_number = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    printf("Welcome to the Guessing Game\n");
    do
    {
        printf("guess (1-100): ");
        scanf("%d", &guess);
        attempts++;

        if (guess < target_number)
        {
            printf("Too low Try again.\n");
        }
        else if (guess > target_number)
        {
            printf("Too high Try again.\n");
        }
        else
        {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", target_number, attempts);
        }
    } while (guess != target_number);

    return 0;
}
