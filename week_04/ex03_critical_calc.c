#include <stdio.h>
#include <math.h>
// variables
int main()
{
    int attack;
    int defense;
    int hit_number;

    printf("IN COMBAT\n");

    printf("\nPlayer Attack : ");
    scanf("%d", &attack);

    printf("Enemy Defense : ");
    scanf("%d", &defense);

    printf("Hit Number : ");
    scanf("%d", &hit_number);

    int base_damage = attack - defense;
    int damage;

    if (hit_number % 5 == 0)
    {
        damage = (int)ceil((float)base_damage * 1.5f);
        printf("Damage = %d  !!!CRITICAL HIT! x1.5 !!!\n", damage);
    }
    else
    {
        damage = base_damage;
        printf("Damage = %d (Normal)\n", damage);
    }
    return 0;
}