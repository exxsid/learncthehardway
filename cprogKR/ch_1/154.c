// count lines, words, and characters input
#include <stdio.h>

#define IN    1   // inside a word
#define OUT   0   // outside a word

int main()
{
  // nl = newline; nw = new word; nc = number of characters
  // state = records whether the program is currently in a word or not
  int nl, nw, nc, state;  
  char c;     /* current character in a input sentence */

  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc; // increment the number of character
    if (c == '\n')
      ++nl; // increment the of new lines
    if (c == ' ' || c == '\n' || c == '\t')
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
}
