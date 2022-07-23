/*
 * write a program to copy its input to its output, replacing each tab by \t,
 * each backspace by \b, and each backslash by \\. this makes tabs and backspace
 * visible in an unambiguous way.
 */

#include <stdio.h>

int main (int argc, char *argv[])
{
  char c;

  while ((c = getchar()) != EOF)
  {
    if (c == '\t')
      printf("\\t");
    else if (c == '\b')
      printf("\\b");
    else if (c == '\\')
      printf("\\");
    else putchar(c);
  }
  return 0;
}
