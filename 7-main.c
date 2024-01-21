#include <stdio.h>

/**
 * main - Accessing the different elements of an array
 * Return: Always 0
 */
int main(void){
   int a[5];

   a[0]=87;
   a[1]=5;
   a[2]=4;
   a[3]=67;
   a[4]=5;
   printf("Value of a[0]: %d\n", a[0]);
   printf("The value of a[1]: %d\n", a[1]);
   printf("The address of a[1]: %p\n", &a[1]);
   return 0;
}
