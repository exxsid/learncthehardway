// write a program that prints input one word per line.
#include <stdio.h>

int main (int argc, char *argv[])
{
  char c;

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      printf("\n");
    else 
      putchar(c);
  }
  return 0;
}
