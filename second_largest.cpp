#include <iostream>
using namespace std;
//! Program to find the largest and second largest elements in an array and return their result;
// The second largest element might not exist in an array so we set the index of second largest element to be -1
// The index of the largest element starts from 0 and gets updated as we move across the array.

void largest_second_largest(int arr[], int n)
{
  int i = 0;
  int sec_idx = -1;
  int fir_idx = 0;
  for (i = 0; i < n; i++)
  {
    if (arr[i] > arr[fir_idx])
    {
      sec_idx = fir_idx;
      fir_idx = i;
    }
    else if (arr[i] != arr[fir_idx])
    {
      if (sec_idx == -1 || arr[i] > arr[sec_idx])
        sec_idx = i;
    }
  }
  cout << fir_idx;
  cout << endl
       << sec_idx;
}

int main()
{
  int arr[] = {5, 20, 12, 20, 8};
  largest_second_largest(arr, 5);

  return 0;
}