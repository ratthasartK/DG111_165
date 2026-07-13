#include <stdio.h>
int main()
{
    // variables
    float weight, height, bmi;
    // input weight and height
    printf("weight? (in kg): ");
    scanf("%f", &weight);
    printf("height? (in cm): ");
    scanf("%f", &height);
    // input BMI
    bmi = weight / ((height / 100) * (height / 100));
    // output BMI
    printf("Your BMI is: %.2f\n", bmi);
    if (bmi < 18.5)
    {
        printf("YOU underweight.\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9)
    {
        printf("YOU normal .\n");
    }
    else if (bmi >= 25 && bmi < 29.9)
    {
        printf("YOU overweight.\n");
    }
    else
    {
        printf("YOU are obese.\n");
    }
    return 0;
}