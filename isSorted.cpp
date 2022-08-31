#include <iostream>
using namespace std;
//! Program to find if an array is sorted or not.

void isSorted(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    if (arr[i] >= arr[i - 1])
    {
      continue;
    }
    else
    {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
  //* This algorithm takes O(n) time and O(1) auxiliary space.
}

int main()
{
  int arr[] = {2};
  int n = 1;
  isSorted(arr, n);
  return 0;
}