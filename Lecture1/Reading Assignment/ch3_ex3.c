#include <stdio.h>

int main(void)
{

   int num1, denom1, num2, denom2, result_num, result_denom;

   printf("Enter first fraction: ");
   scanf("%d/%d", &num1, &denom1); //splits the fraction's numerator and denominator and stores them in their appropriate variables

   printf("Enter second fraction: ");
   scanf("%d/%d", &num2, &denom2); 

   //mimics the butterfly method in adding fractions
   result_num = (num1 * denom2) + (num2 * denom1);
   result_denom = (denom1 * denom2); 

   //formats the values of resulting numerator and denominator into a fraction
   printf("The sum is %d/%d\n", result_num, result_denom);

   return 0;

}
