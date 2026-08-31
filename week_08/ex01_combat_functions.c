#include <stdio.h>
#include <math.h>

// function prototypes
int calculateDamage(int attack, int defense);
int isCriticalHit(int roundNumber);
void displayHP(int current, int max);
void printCombatResult(int round, int damage, int isCrit)

    int main(void)
{
    int attack = 80;
    int defense = 25;
    int enemyHP = 500;
    int enemyMaxHP = 500;

    printf("=== COMBAT SIMULATOR ===\n");
    printf("------------------------------------------\n");

    for (int round = 1; round <= 10 && enemyHP > 0; round++)
    {

        // Critical hit every 5 rounds
        int isCrit = (round % 5 == 0);

        // Damage calculation
        int scaledAttack = isCrit ? (int)(attack * 1.5) : attack;
        int damage = scaledAttack - defense;
        if (damage < 1)
            damage = 1;

        enemyHP -= damage;
        if (enemyHP < 0)
            enemyHP = 0;

        printf("Round %2d: ", round);
        if (isCrit)
        {
            printf("*** CRITICAL! ***");
        }
        else
        {
            printf("Normal         ");
        }

        printf(" - Damage: %2d | ", damage);

        // HP Bar
        int filled = (enemyHP * 10) / enemyMaxHP;
        char bar[11];

        for (int i = 0; i < 10; i++)
        {
            bar[i] = (i < filled) ? '#' : '-';
        }
        bar[10] = '\0';

        printf("Enemy HP: [%s] %3d/%d\n",
               bar, enemyHP, enemyMaxHP);
    }

    printf("------------------------------------------\n");

    if (enemyHP == 0)
    {
        printf("Enemy defeated!\n");
    }
    else
    {
        printf("Enemy survived with %d HP remaining.\n", enemyHP);
    }

    return 0;
}