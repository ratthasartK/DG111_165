#include <stdio.h>
int main()
{
    // declare and initialize variables
    char name[50];
    int health_points;
    int attack_power;
    int defense;
    float speed;
    int level;

    // get user input
    printf("Enter character name: ");
    scanf("%49s", name);
    printf("Enter level: ");
    scanf("%d", &level);
    printf("Enter health points: ");
    scanf("%d", &health_points);
    printf("Enter attack power: ");
    scanf("%d", &attack_power);
    printf("Enter defense: ");
    scanf("%d", &defense);
    printf("Enter speed: ");
    scanf("%f", &speed);

    // display character stats
    printf("\nCharacter Stats:\n");
    printf("Name: %s\n", name);
    printf("Health Points: %d\n", health_points);
    printf("Level: %d\n", level);
    printf("Attack Power: %d\n", attack_power);
    printf("Defense: %d\n", defense);
    printf("Speed: %.2f\n", speed);

    return 0;
}