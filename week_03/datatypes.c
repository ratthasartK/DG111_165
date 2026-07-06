#include <stdio.h>
int main()
{
    // ประกาศและกาหนดค่าตัวแปร
    int age = 18;
    float gpa = 4.00f;
    double pi = 3.14159265358979;
    char grade = 'S';
    // แสดงค่าและขนาด
    printf("int age = %d (size: %zu bytes)\n", age,
           sizeof(age));
    printf("float gpa = %.2f (size: %zu bytes)\n", gpa,
           sizeof(gpa));
    printf("double pi = %.10f (size: %zu bytes)\n", pi,
           sizeof(pi));
    printf("char grade = %c (size: %zu bytes)\n", grade,
           sizeof(grade));
    return 0;
}