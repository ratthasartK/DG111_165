#include <stdio.h>

int main()
{
    // variables
    int score;
    char grade[3];
    float point;
    // input
    printf("Enter score: ");
    scanf("%d", &score);
    // determine grade and point
    if (score >= 80 && score <= 100)
    {
        sprintf(grade, "A");
        point = 4.0;
    }
    else if (score >= 75)
    {
        sprintf(grade, "B+");
        point = 3.5;
    }
    else if (score >= 70)
    {
        sprintf(grade, "B");
        point = 3.0;
    }
    else if (score >= 65)
    {
        sprintf(grade, "C+");
        point = 2.5;
    }
    else if (score >= 60)
    {
        sprintf(grade, "C");
        point = 2.0;
    }
    else if (score >= 55)
    {
        sprintf(grade, "D+");
        point = 1.5;
    }
    else if (score >= 50)
    {
        sprintf(grade, "D");
        point = 1.0;
    }
    else
    {
        sprintf(grade, "F");
        point = 0.0;
    }
    // output
    printf("Grade: %s (%.1f) - ", grade, point);

    if (score >= 50)
        printf("Pass\n");
    else
        printf("Fail\n");

    return 0;
}