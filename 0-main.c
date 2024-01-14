#include <stdio.h>

/**
 * main - using sizeof to determine the size of char, int and float
 * return: Always 0
 */
int main(void)
{
   printf("The size of char is: %u\n", sizeof(char));
   printf("The size of int is: %u\n", sizeof(int));
   printf("The size of float is: %u\n", sizeof(float));

   return(0);
}
