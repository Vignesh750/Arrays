#include <iostream>
using namespace std;

//! Program to reverse an array without using a new array.

void reverse_array(int arr[], int n)
{
  int end = (n % 2 == 0) ? (n / 2) - 1 : n / 2;
  for (int i = 0; i <= end; i++)
  {
    int temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }
  // The below code is to print the elements only and does not contribute to the running time of program.
  //* The time complexity is O(n).
  //* This takes O(1) auxiliary space.
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{
  int arr[] = {30, 7, 6, 5};
  reverse_array(arr, 4);
  return 0;
}