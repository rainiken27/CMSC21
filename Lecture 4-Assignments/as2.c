#include <stdio.h>

int main()
{
    int i = 10;

    printf("Output for While Loop: ");
    while (i < 10)
    {
        printf("Hello!");
    }

    printf("\nOutput for For Loop: ");
    for (; i < 10;)
    {
        printf("Hello!");
    }

    printf("\nOutput for Do-While Loop: ");
    do
    {
        printf("Hello!");
    } while (i < 10);

}
