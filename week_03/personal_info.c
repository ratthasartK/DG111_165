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
    scanf("%49s", major);
    // แสดงค่าที่รับมา
    printf("\nYour personal information:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Height: %.1f cm\n", height);
    printf("Favorite Major: %s\n", major);
    return 0;
}