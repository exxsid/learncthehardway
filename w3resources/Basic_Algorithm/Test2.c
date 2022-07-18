/*
 * Write a program to get the absolute difference between n and 51.
 * If n is greater that 51 return the triple the absolute difference.
 */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
  int n = 0, diff = 0;
  const int NUM = 51;
  
  scanf("%d", &n);
  if (n > 51)
  {
    diff = abs(n - 51) * 3;
  } else
  {
    diff = abs(n - 51);
  }

  printf("diff: %d\n", diff);
  return 0;
}
