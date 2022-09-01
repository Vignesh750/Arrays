#include <iostream>
using namespace std;
//! Program to find the amount of water that can be trapped between the blocks of given size
//! the block sizes are given in the form of an array.

//* The leftmost and right most blocks can not store any water as they will over flow
//* The amount of water that can be stored in the ith block is given by
//* min((The maximum  on the left of array),(The maximum on the right of the array))-ith element of the array
int naive(int arr[], int n)
{
  int res = 0;
  //* counter variable to store the amount of water that can be stored in each block.

  for (int i = 1; i < n - 1; i++)
  {
    int lmax = arr[i];
    //* lmax is the maximum element on the left of the ith element

    for (int j = 0; j < i; j++)
    {
      if (arr[j] > lmax)
      {
        lmax = arr[j];
      }
    }

    int rmax = arr[i];
    //* rmax is the maximum element on the right side of the ith element.
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] > rmax)
      {
        rmax = arr[j];
      }
    }
    res += min(lmax, rmax) - arr[i];
  }
  return res;
  //* This method takes theta(n*n) time as it runs two for loops for size n
}

int efficient(int arr[], int n)
{
  int res = 0;
  int lmax[n], rmax[n];
  //* lmax array contains the maximum element to the left of each element in arr.
  //* rmax array contains the maximum element to the right of each element in arr.

  lmax[0] = arr[0];
  for (int i = 1; i < n; i++)
  {
    lmax[i] = max(arr[i], lmax[i - 1]);
  }
  rmax[n - 1] = arr[n - 1];
  for (int i = n - 2; i >= 0; i--)
  {
    rmax[i] = max(arr[i], rmax[i + 1]);
  }
  for (int i = 1; i < n - 1; i++)
  //* We cannot store any water on top of the corner bar so the loop must run for only the middle bars.
  {
    res += min(lmax[i], rmax[i]) - arr[i];
  }
  return res;
  //* We are doing theta(n)+theta(n)+theta(n) work here so the
  //* overall time complexity of this solution is theta(n)
  //* the overall space complexity is theta(n) as we are creating two new arrays of size n.
}
int main()
{
  int arr[] = {5, 0, 6, 2, 3};
  cout << efficient(arr, 5) << endl;
  cout << naive(arr, 5);

  return 0;
}