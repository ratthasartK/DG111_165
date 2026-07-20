#include <stdio.h>

int main()
{
    int max_hp;
    int damage;
    int poisoned_input;
    int attack_count;

    _Bool is_poisoned;

    // Input
    printf("Max HP: ");
    scanf("%d", &max_hp);

    printf("Damage Taken: ");
    scanf("%d", &damage);

    printf("Poisoned (0/1): ");
    scanf("%d", &poisoned_input);

    printf("Attack Count: ");
    scanf("%d", &attack_count);

    // onvert int to _Bool
    is_poisoned = poisoned_input;

    // Calculate HP
    int hp = max_hp - damage;

    if (hp < 0)
    {
        hp = 0;
    }

    printf("\n=== Character Status ===\n");

    if (hp <= 0)
    {
        printf("State: DEAD\n");
    }
    else if ((float)hp / max_hp < 0.25)
    {
        printf("State: CRITICAL\n");
    }
    else if (is_poisoned)
    {
        printf("State: POISONED\n");
    }
    else
    {
        printf("State: NORMAL\n");
    }

      if (attack_count > 0 && attack_count % 5 == 0)
    {
        printf("Ultimate Ready!\n");
    }

    return 0;
}