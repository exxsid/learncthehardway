// write a program to print a histogram of the lengths of words input.
// It is easier to draw in horizontal than vertical
#include <stdio.h>

int main (int argc, char *argv[])
{
  char c;
  int len = 0;    // store the length of current input word

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      putchar('\t');
      // print the '#' to indicate the lenght of the word
      for (int i = 0; i < len; ++i) {
        putchar(' ');
        putchar('#');
      }
      putchar('\n');
      len = 0;    // reset the len
    } else {
      putchar(c);
      ++len;
    }
  }
  return 0;
}
