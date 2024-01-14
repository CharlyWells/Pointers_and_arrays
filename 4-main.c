#include <stdio.h>

/**
 * main - storing the address of the pointer
 * return: Always 0
 */
int main(void)
{
  int n;
  int *p;
  n=98;
  p=&n;

  printf("The value of n is: %u\n",n);
  printf("The sizeof n is: %u\n", sizeof(n));
  printf("The value of p is: %u\n", *p);
  printf("The sizof of p is: %u\n",sizeof(p));
  printf("The address of p is: %p\n", &p);
  return (0);

}
