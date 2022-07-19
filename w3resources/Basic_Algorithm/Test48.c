/*
 * Write a program to create a new array swapping the first and last element
 * of a given array on integers and length will be leat 1.
 */

#include <stdio.h>

void swapArray(int arr[], int newArr[], int n)
{
  for (int i = 0; i < n; ++i)
  {
    newArr[i] = arr[i];
  }
  int temp = newArr[0];
  newArr[0] = newArr[n-1];
  newArr[n-1] = temp;
}

void printArr(int arr[], int n)
{
  for (int i = 0; i < n; ++i)
  {
    printf("%d ", arr[i]);
  }
}

int main (int argc, char *argv[])
{
  int arr[] = {1, 5, 7, 9, 10, 11, 13};

  int n = sizeof(arr) / sizeof(arr[0]);

  int newArr[n];

  swapArray(arr, newArr, n);

  printArr(newArr, n);
  
  return 0;
}
