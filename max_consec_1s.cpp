#include <iostream>
using namespace std;
//! Program to fine the maximum number of consecutive 1's in a binary array.
//! I/P : {0,1,1,0,1,1,1,0}
//! O/P : 3

int naive(int arr[], int n)
{
  int res = 0;
  for (int i = 0; i < n; i++)
  {
    int curr = 0;
    for (int j = i; j < n; j++)
    {
      if (arr[j] == 1)
        curr++;
      else
      {
        break;
      }
    }
    res = max(res, curr);
  }
  return res;
  //* This method takes O(n*n) time as there are nested loops
}

int efficient(int arr[], int n)
{
  int res = 0;
  int curr = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 1)
    {
      curr++;
      res = max(res, curr);
    }
    else
    {
      curr = 0;
    }
  }
  return res;
  //* This efficient method takes O(n) time complexity and O(1) auxiliary space.
}
int main()
{
  int arr[] = {0, 1, 1, 0, 1, 1, 1};
  int n = 7;
  cout << naive(arr, n) << endl;
  cout << efficient(arr, n);
  return 0;
}