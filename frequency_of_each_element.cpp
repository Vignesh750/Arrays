#include <iostream>
using namespace std;
//! Program to find the frequency of each distinct element in a sorted array
//! and print that element along with its frequency.

void frequency(int arr[], int n)
{
  int i = 1;
  int freq = 1;
  while (i < n)
  {
    while (i < n && arr[i] == arr[i - 1])
    {
      freq++;
      i++;
    }
    cout << "The element " << arr[i - 1] << " appears " << freq << " times.\n";
    i++;
    freq = 1;
  }
  if (n == 1 || arr[n - 1] != arr[n - 2])
  {
    cout << "The element " << arr[n - 1] << " appears " << 1 << " time.\n";
  }
  //* The time complexity of this solution is theta(n).
}
int main()
{
  int arr[] = {10, 10, 10, 30, 30, 40};
  frequency(arr, 6);
  return 0;
}