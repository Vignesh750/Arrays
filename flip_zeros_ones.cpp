#include <iostream>
using namespace std;
//! Program to find the minimum number of flips so that a binary flip contains either zeros or ones
//! we need to print the start and end index of each flip
//! https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Arrays/video/MTU4Ng%3D%3D
void efficient(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    if (arr[i] != arr[i - 1])
    {
      if (arr[i] != arr[0])
      {
        cout << "From index " << i;
      }
      else
      {
        cout << " to index " << i - 1 << endl;
      }
    }
  }
  if (arr[n - 1] != arr[0])
  {
    cout << (n - 1) << endl;
  }
}
int main()
{
  int arr[] = {0, 0, 1, 1, 0, 0, 1, 1, 0};
  int n = sizeof(arr) / sizeof(n);
  efficient(arr, n);
  return 0;
}