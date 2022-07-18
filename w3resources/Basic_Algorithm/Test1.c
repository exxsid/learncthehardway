/*
 * Write a C program to compute the sum of the two given integer values. 
 * If the two values are the same, then return triple their sum.
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
  int x, y, sum;
  x = y = sum = 0;

  scanf("%d %d", &x, &y);

  if (x == y) sum = (x + y) * 3;
  else sum = x + y;

  printf("Sum: %d\n", sum);
}
