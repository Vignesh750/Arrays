#include <iostream>
using namespace std;
//! Program to left Rotate an array by one.

void left_rotate(int arr[], int n)
{
  int temp = arr[0];
  for (int i = 0; i < n; i++)
  {
    arr[i] = arr[i + 1];
  }
  arr[n - 1] = temp;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
  }
  //* This method takes theta(n) time and it requires theta(1) auxiliary space.
}
int main()
{
  int arr[] = {1, 2, 3, 4};
  left_rotate(arr, 4);
  return 0;
}