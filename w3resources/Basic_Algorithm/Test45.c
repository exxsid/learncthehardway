/*
 * Write a program to compute the sum of two given arrays of integer of length
 * 3 and find the array which has the largest sum.
 */

#include <stdio.h>

void getArr(int arr[], int size)
{
  for(int i = 0; i < size; ++i)
  {
    scanf("%d", &arr[i]);
  }
}

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int getSum(int arr[], int n)
{
  int sum = 0;
  for (int i = 0; i < n; ++i)
  {
    sum += arr[i];
  }
  return sum;
}

int main (int argc, char *argv[])
{
  int arr1[3];
  int arr2[3];

  int size = sizeof(arr1) / sizeof(arr1[0]);

  printf("Array 1: ");
  getArr(arr1, size);
  printf("Array 2: ");
  getArr(arr2, size);

  // printArr(arr1, size);
  // printArr(arr2, size);
  
  int sum1 = getSum(arr1, size);
  int sum2 = getSum(arr2, size);

  if (sum1 > sum2) printArr(arr1, size);
  else printArr(arr2, size);

  return 0;
}
