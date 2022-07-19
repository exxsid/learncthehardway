// count characters in input
#include <stdio.h>

void first()
{
  long nc = 0; // counter for number of characters

  while(getchar() != EOF)
    ++nc;

  printf("Count: %ld\n", nc);
}

void second()
{
  long nc;

  for (nc = 0; getchar() != EOF; ++nc)
    ;

  printf("Count: %d\n", nc);
}

int main()
{
  // first();
  second();
  return 0;
}
