#include <iostream>
using namespace std;
//! Program to insert an element in a sorted array when the size and capacity of the array is given.

int insert_in_a_sorted_array(int arr[], int n, int key, int capacity)
{
  //*This method return n+1 if the insertion is successful else returns n;
  if (n >= capacity)
  {
    return n;
  }
  int i;
  for (i = n - 1; (i >= 0 && arr[i] > key); i--)
  {
    arr[i + 1] = arr[i];
  }
  arr[i + 1] = key;
  return n + 1;
}
int main()
{

  return 0;
}