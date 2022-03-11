#include <stdio.h>

int main(void)
{
   
   int num1, num2, result;

   num1 = 15, num2 = 87; //assigning 15 and 87 to variables rids the program from magic numbers

   result = num2 - num1; 

   printf("Subtracting the value %d from %d results to %d", num1, num2, result); //"subtract from" means the first value is the subtrahend

   return 0;

}

