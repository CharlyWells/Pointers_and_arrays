#include <stdio.h>

/**
 * main - deferencing pointers
 * retrun - always 0
 */
int main(void)
{
  int n = 98;
  int *f;
  f=&n;

  printf("The value of n is: %u\n",n);
  printf("The address of n is:  %p\n",&n);
  printf("the sizeof n is: %u\n", sizeof(n));
  printf("The value of f is : %u\n", f);
  printf("The address of f is: %p\n", f);
  *f= 87;
  printf("The value of pointer f is: %u\n",*f);
  printf("The address of pointer f is: %p\n", f);
  printf("The value of n is: %u\n",n);
  return 0;
}
