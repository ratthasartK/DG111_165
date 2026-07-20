#include <stdio.h>

int main()
{
    int gold = 1000;
    int choice;

    printf("WELCOME TO THE SHOP\n");
    printf("Gold: %d\n", gold);
    printf("1. Health Potion - 50 Gold (+50 HP)\n");
    printf("2. Mana Potion - 80 Gold (+30 MP)\n");
    printf("3. Iron Sword - 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor - 300 Gold (+15 DEF)\n");
    printf("5. Exit\n");

    printf("Select item: ");
    scanf("%d", &choice);

    switch (choice)
    {

    case 1:
        gold -= 50;

        printf("\n=== Purchase ===\n");
        printf("Health Potion: 50 Gold\n");
        printf("Remaining : %d Gold\n", gold);
        printf("HP Bonus : +50\n");
        printf("Item purchased successfully! ✓\n");
        break;

    case 2:
        gold -= 80;

        printf("\n=== Purchase ===\n");
        printf("Mana Potion: 80 Gold\n");
        printf("Remaining : %d Gold\n", gold);
        printf("MP Bonus : +30\n");
        printf("Item purchased successfully! ✓\n");
        break;

    case 3:
        gold -= 500;

        printf("\n=== Purchase ===\n");
        printf("Iron Sword: 500 Gold\n");
        printf("Remaining : %d Gold\n", gold);
        printf("ATK Bonus : +20\n");
        printf("Item purchased successfully! ✓\n");
        break;

    case 4:
        gold -= 300;

        printf("\n=== Purchase ===\n");
        printf("Leather Armor: 300 Gold\n");
        printf("Remaining : %d Gold\n", gold);
        printf("DEF Bonus : +15\n");
        printf("Item purchased successfully! ✓\n");
        break;

    case 5:
        printf("Thank you for visiting!\n");
        break;

    default:
        printf("Invalid menu!\n");
        break;
    }

    return 0;
}