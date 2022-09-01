#include <iostream>
using namespace std;

//! Program to find the maximum sum of sub array in the given array.
//! sub array means contiguous elements picked from the array.
//! if the array has only positive elements the output is the sum of the entire array.
//! if the array has only negative elements the output is the largest negative element.
//! Video reference => https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Arrays/video/MTQwMg%3D%3D
int naive(int arr[], int n)
{
  int res = arr[0];
  for (int i = 0; i < n; i++)
  {
    int curr = 0;
    for (int j = i; j < n; j++)
    {
      curr += arr[j];
      res = max(curr, res);
    }
  }
  return res;
  //* the time comlexity of this solutin is O(n*n).
}
int efficient(int arr[], int n)
{
  int maxending = arr[0];
  int res = arr[0];
  for (int i = 1; i < n; i++)
  {
    maxending = max(maxending + arr[i], arr[i]);
    res = max(res, maxending);
  }
  return res;
  //* The time complexity of this method is O(n),
}

int main()
{
  int arr[] = {1, -2, 3, -1, 2};
  int n = sizeof(arr) / sizeof(int);
  cout << naive(arr, n) << endl;
  cout << efficient(arr, n) << endl;
  return 0;
}