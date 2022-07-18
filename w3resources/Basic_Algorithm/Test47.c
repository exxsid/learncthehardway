/*
 * Write a program to create a new array from two given array of integers,
 * each length 3;
 */

#include <stdio.h>

// get the array from console
void getArr(int arr[], int n)
{
  for (int i = 0; i < n; ++i)
  {
    scanf("%d", &arr[i]);
  }
}

// combine/merge the two array (arr1, arr2) into a new array
void mergeArr(int arr1[], int arr2[], int newArr[], int n)
{
  for (int i = 0; i < n; ++i)
  {
    newArr[i] = arr1[i];
    newArr[i+3] = arr2[i];
  }

}

// print the array
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
  int size = 3;
  int arr1[size], arr2[size];
  
  getArr(arr1, size);
  getArr(arr2, size);

  int newArr[size*2];

  mergeArr(arr1, arr2, newArr, size);

  printArr(newArr, size*2);
  
  return 0;
}
