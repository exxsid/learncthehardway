/* write a program to count blanks, tabs, and newlines*/

#include <stdio.h>

int main()
{
  char c;
  long bl, tb, nl;  // store blanks, tabs, and newlines
  bl = tb = nl = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
      ++bl;
    else if (c == '\t')
      ++tb;
    else if (c == '\n')
      ++nl;
  }

  printf("Blanks: %ld\n", bl);
  printf("Tabs: %ld\n", tb);
  printf("Newlines: %ld\n", nl);
}
