#include <stdio.h>

int main(void)
{
    int i = 1, n, result = 1;

    //prompt
    printf("Enter the value of the exponent for base 2: ");
    scanf("%d", &n);

    //input validation
    if (n < 0)
    {
        printf("Invalid Input. Please Use Whole Numbers Only.");
        return 0;
    }

    //every succeeding iteration finds the next power of 2
   for (; i <= n; i++)
    {
        result *= 2;
    }

    printf("2 Raised to the Power of %d is: %d", n, result);

    return 0;
}
