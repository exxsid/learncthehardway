#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (int argc, char *argv[])
{
  char str[100];
  char lower[100];

  printf("Enter a string to be converted to lowercase: ");
  scanf("%s", str);

  for (int i = 0; str[i] != '\0'; ++i)
  {
    lower[i] = tolower(str[i]);
  }

  printf("%s\n", lower);

  return 0;
}
