#include <stdio.h>
int main()
{
    // variables
    int hour, minute, second;
    // input time
    printf("Enter the number of seconds: ");
    scanf("%d", &second);

    // calculate hour, minute, second
    hour = second / 3600;
    minute = (second % 3600) / 60;
    second = second % 60;

    // output time
    printf("Time: %dh:%02dm:%02ds\n", hour, minute, second);
}