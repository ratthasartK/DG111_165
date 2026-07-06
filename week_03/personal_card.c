#include <stdio.h>
int main()
{
    // ประกาศและกาหนดค่าตัวแปร
    char name[30];
    int age;
    float height;
    char major[50];
    // รับค่าจากผู้ใช้
    printf("Enter your name: ");
    scanf("%29s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height (in cm): ");
    scanf("%f", &height);
    printf("Enter your favorite major: ");
    scanf("%19s", major);
    // แสดงค่าที่รับมา
    printf("\nYour personal information\n");
    printf("===========================\n");
    printf("┌────────────────────┐\n");
    printf("│Name: %-13s │\n", name);
    printf("│Age: %-14d │\n", age);
    printf("│Height: %-9.1f cm│\n", height);
    printf("│Favorite Major: %-3s │\n", major);
    printf("└────────────────────┘\n");
    return 0;
}