#include <stdio.h>


int main()
{
  printf("Guess the number!\n");

  printf("Please enter a number.\n");

  int guess = 0;

  scanf("%d", &guess);

  printf("You guessed: %d\n", guess);
  return 0;
}
