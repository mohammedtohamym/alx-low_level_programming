#include <stdio.h>

int main(void)
{
  int nn;
  int aa[5];
  int *pp;

  aa[2] = 1024;
  pp = &nn;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(pp + 5) = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", aa[2]);
  return (0);
}
