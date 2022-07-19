/*
 * write a program to create a new array of length 3 from a given array 
 * (length least 3) containg the elements from the middle of the array.
 */

#include <stdio.h>

void printArr(int arr[], int n)
{
  for (int i = 0; i < n; ++i)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main (int argc, char *argv[])
{
  int array[] = {1, 5, 7, 9, 11, 13, 15, 20};

  // get the size of the array
  int n = sizeof(array) / sizeof(array[0]);

  // get the middle index of the array
  int midInd = n / 2;

  int newArr[] = {array[midInd-1], array[midInd], array[midInd+1]};

  printArr(newArr, 3);
  return 0;
}
