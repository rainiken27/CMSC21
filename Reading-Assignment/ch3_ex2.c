#include <stdio.h>

int main(void){

   int i;
   float x;

   //arbitrary integer and float values
   i = 40;
   x = 839.21f;

   //functions prints the integer and the floating point in different conversion specifiers and varying formatting information
   printf("%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
   printf("%10.3f|%10.3e|%-10g|\n", x, x, x, x);

   return 0;

}
