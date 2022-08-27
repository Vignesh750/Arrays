#include <iostream>
using namespace std;
//! Program to find the index of an element in an array
//! It returns -1 if the element is not found
int search(int arr[], int n, int key)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      return i;
    }
  }
  return -1;
  //* This linear search function takes O(n) time
  //* But binary search can search an element in an array in log n time.
  //* for binary search the array needs to be a sorted array.
  //* for linear search the array need not be a sorted array.
}
int main()
{
  int n, key;
  cout << "Enter the size of the array : ";
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cout << "Enter the element at index " << i << " : ";
    cin >> arr[i];
  }
  cout << "Enter the key to search : ";
  cin >> key;
  cout << search(arr, n, key);

  return 0;
}