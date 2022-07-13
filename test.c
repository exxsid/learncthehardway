#include <stdio.h>


int main()
{
  int c = 9;
  int *pc = &c;

  printf("c: %d\n", *pc);
  return 0;
}
