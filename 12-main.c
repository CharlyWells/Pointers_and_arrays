#include <stdio.h>

/**
 * main : illustrstes pointer arithmetic
 *
 * Reutrn: Always 0
 */
int main(void)
{
   int a[5];

   
   *a = 98; /*same as *(a+0)*/
   *(a + 1) = 198;
   printf("Value of a[0]: %d\n", *a);

   return 0;


}
