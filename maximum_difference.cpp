#include <iostream>
#include <algorithm>
using namespace std;

//! Program to find the maximum possible diffence between two elements of an array arr[j]-arr[i] such that
//! j > i;

int max_diff_naive(int arr[], int n)
{
  int max = arr[1] - arr[0];
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] - arr[i] > max)
      {
        max = arr[j] - arr[i];
      }
    }
  }
  return max;
  //* This method takes O(n*n) time.
  //* The efficient method takes O(n) time.
}
int max_difference_efficient(int arr[], int n)
{
  int min = arr[0];
  int j;
  int max = arr[1] - arr[0];
  for (j = 1; j < n; j++)
  {
    if (arr[j] < min)
    {
      min = arr[j];
    }
    if (arr[j] - min > max)
    {
      max = arr[j] - min;
    }
  }
  return max;
}

int main()
{
  int arr[] = {2, 3, 10, 6, 4, 8, 1};
  cout << max_diff_naive(arr, 7) << endl;
  cout << max_difference_efficient(arr, 7);

  return 0;
}