#include <stdio.h>
#include <string.h>

int lenstr(char *str)
{
  int count = 0;
  while(*str != '\0')
  {
    ++count;
    str++;
  }
  return count;
}

int main (int argc, char *argv[])
{
  char str[1000];

  printf("Enter a string: ");
  scanf("%s", str);
  
  // get the length of string using a function from string.h
  int len = strlen(str);

  // manually building a function to get the length of a string
  int len2 = lenstr(str);

  printf("%s length is %d\n", str, len);
  printf("%s length is %d\n", str, len2); // using the hardcoded function
  return 0;
}
