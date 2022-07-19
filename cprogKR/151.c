#include <stdio.h>

void first()
{
  char c;

  c = getchar();
  while(c != EOF)
  {
    putchar(c);
    c = getchar();
  }
}

void second()
{
  char c;

  while ((c = getchar()) != EOF)
  {
    putchar(c);
  }
}

int main (int argc, char *argv[])
{
  // first();
  second();
  return 0;
}
