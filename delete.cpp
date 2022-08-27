#include <iostream>
using namespace std;
//! Program to delete an element from an array and return the size of the modified array

int delete (int arr[], int n, int key)
{
  for (int i = 0; i < n; i++)
  {
    if (key == arr[i])
    {
      break;
    }
  }
  if (i == n)
  {
    return n;
    // the key was not found so we return the original size of the array n.
  }
  for (i; i < n - 1; i++)
  {
    arr[i] = arr[i + 1];
  }
  return n - 1;
  // This function takes theta(n) time
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
  cout << delete (arr, n, key);
}