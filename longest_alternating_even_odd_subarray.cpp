#include <iostream>
using namespace std;
//! Program to find the length of the longest subarray with alternating odd and even elements

int naive(int arr[], int n)
{
  int res = 1;
  for (int i = 0; i < n; i++)
  {
    int curr = 1;
    for (int j = i + 1; j < n; j++)
    {
      if ((arr[j] % 2 == 0 && arr[j - 1] % 2 != 0) || (arr[j] % 2 != 0 && arr[j - 1] % 2 == 0))
      {
        curr++;
      }
      else
      {
        break;
      }
      res = max(res, curr);
    }
  }
  return res;
  //* This method takes O(n*n) time .
}

int efficient(int arr[], int n)
{
  int res = 1;
  int curr = 1;
  for (int j = 1; j < n; j++)
  {
    if ((arr[j] % 2 == 0 && arr[j - 1] % 2 != 0) || (arr[j] % 2 != 0 && arr[j - 1] % 2 == 0))
    {
      curr++;
      res = max(res, curr);
    }
    else
    {
      curr = 1;
    }
  }
  return res;
}
int main()
{
  int arr[] = {5, 10, 20, 6, 3, 8};
  int n = sizeof(arr) / sizeof(int);
  cout << naive(arr, n) << endl;
  cout << efficient(arr, n);
  return 0;
}