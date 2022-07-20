// write a program to copy its input to its output, replacing each string
// of one or more blanks by a single blanks
#include <stdio.h>

int main (int argc, char *argv[])
{
  char curr, prev;

  while ((curr = getchar()) != EOF)
  {
    if (curr != ' ' || prev != ' ')
    {
      putchar(prev = curr);
    }
  }
  return 0;
}
