/*
 * Write a program to create an array taking two middle elements from a given
 * array of integers of length even.
 */

#include <stdio.h>

int main (int argc, char *argv[])
{
  int arr[] = {1, 5, 7, 9, 11, 13};

  int size = sizeof arr / sizeof arr[0];

  int mid = size / 2;
  printf("%d %d\n", arr[mid - 1], arr[mid]);
  return 0;
}
