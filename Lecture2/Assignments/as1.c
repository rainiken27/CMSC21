#include <stdio.h>

int main()
{
    int digit1, digit2, reversed_num;

    //reads each digit and assigns them to appropriate variable
    printf("Enter a two digit number: ");
    scanf("%1d%1d", &digit1, &digit2);

    //places the 2nd digit in the tens place, effectively reversing the number
    reversed_num = (digit2 * 10) + digit1;

    printf("If you reverse the number %d%d you will get %d", digit1, digit2, reversed_num);
}
