// count lines in input
#include <stdio.h>

void first()
{
  char c;
  int nl = 0; // store the number of lines in input

  while((c = getchar()) != EOF)
  {
    if (c == '\n')
      ++nl;
  }

  printf("Number of lines: %d\n", nl);
}

int main()
{
  first();
  
  return 0;
}
