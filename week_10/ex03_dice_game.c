#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Roll a dice and store result through pointer
void rollDice(int *dice)
{
    *dice = (rand() % 6) + 1;
}

// Get player's guess (1-6)
void getGuess(int *guess)
{
    do
    {
        printf("Guess the number (1-6): ");
        scanf("%d", guess);
    } while (*guess < 1 || *guess > 6);
}

// Increase round number
void nextRound(int *round)
{
    (*round)++;
    printf("\n--- Round %d ---\n", *round);
}

// Check guess and update score
void checkGuess(int dice, int guess, int *score)
{
    printf("Dice: %d\n", dice);

    if (dice == guess)
    {
        printf("Correct! +3 points\n");
        *score += 3;
    }
    else if (abs(dice - guess) == 1)
    {
        printf("Close! +1 point\n");
        *score += 1;
    }
    else
    {
        printf("Incorrect! No points\n");
    }
}

// Display current score (read-only)
void displayScore(const int *score)
{
    printf("Current score: %d\n", *score);
}

// Ask if player wants another round
void askPlayAgain(int *keepPlaying)
{
    char answer;

    printf("Do you want to play again? (y/n): ");
    scanf(" %c", &answer);

    *keepPlaying = (answer == 'y' || answer == 'Y');
}

int main()
{
    srand((unsigned)time(NULL));

    int score = 0;
    int round = 0;
    int dice;
    int guess;
    int keepPlaying;

    int *pScore = &score;

    printf("Welcome to the Dice Guessing Game!\n");

    do
    {
        nextRound(&round);

        rollDice(&dice);

        getGuess(&guess);

        checkGuess(dice, guess, pScore);

        displayScore(pScore);

        askPlayAgain(&keepPlaying);

    } while (keepPlaying);

    printf("\nGame Over! Played %d round(s) - Your final score: %d\n",
           round, score);

    return 0;
}