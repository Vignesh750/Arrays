#include <iostream>
using namespace std;
//! Program to find the largest element in an array and return it along with its index

void naive(int arr[], int n)
{
  int i = 0;
  int max = 0;
  for (i; i < n; ++i)
  {
    if (arr[i] > arr[max])
    {
      max = arr[i];
    }
  }
  cout << arr[max] << "index is " << max;
}

int main()
{

  int arr[] = {1, 2, 3, 4, 5};
  naive(arr, size(arr));
  return 0;
}