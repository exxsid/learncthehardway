#include <stdio.h>

int main(int argc, char *argv[])
{
  int distance = 100;
  float power = 2.345f;
  double superPower = 56789.4532;
  char initial = 'A';
  char firstName[] = "Zed";
  char lastName[] = "Shaw";

  printf("You are %d miles away.\n", distance);
  printf("You have %f levels of power.\n", power);
  printf("You have %f awesone super powers.\n", superPower);
  printf("I have an initial %c.\n", initial);
  printf("I have a first name %s.\n", firstName);
  printf("I have a last name %s.\n", lastName);
  printf("My whole name is %s %c. %s.\n", firstName, initial, lastName);
  
  int bugs = 100;
  double bugRate = 1.2;

  printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bugRate);

  long universeOfDefects = 1L * 1024L * 1024L * 1024L;
  printf("The entire univers has %ld bugs.\n", universeOfDefects);

  double expectedBugs = bugs * bugRate;
  printf("You are expected to have %f bugs.\n", expectedBugs);

  double partOfUniverse = expectedBugs / universeOfDefects;
  printf("That is only a %e portion of the universe.\n", partOfUniverse);

  // this makes no sense, just a demo of something weird

  char nulByte = '\0';
  int carePercentage = bugs * nulByte;
  printf("Which means you should care %d%%.\n", carePercentage);

  return 0;
}
