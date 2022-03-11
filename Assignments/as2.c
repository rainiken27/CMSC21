#include <stdio.h>

int main()
{
    int digit1, digit2, digit3, reversed_num;

    //reads each digit and assigns them to appropriate variable
    printf("Enter a three digit number: ");
    scanf("%1d%1d%1d", &digit1, &digit2, &digit3);

    //operations places third digit in the thousands place and second digit in the tens place
    reversed_num = (digit3 * 100) + (digit2 * 10) + digit1;

    printf("If you reverse the number %d%d%d you will get %d", digit1, digit2, digit3, reversed_num);
}
