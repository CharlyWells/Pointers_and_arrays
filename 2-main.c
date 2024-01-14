#include <stdio.h>

/**
 * main - printing size of pointer
 * return : always 0
 */
int main(void)
{
  int *p;
  printf("The sizof pointer p: %u\n", sizeof(*p));
  return (0);
}
