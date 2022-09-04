#include <iostream>
using namespace std;
//! Program to delete a given element from a sorted array.
//! This program returns n-1 if the delete operation is successful else return n;
int binary_search(int arr[], int n, int key)
{
  //* This function returns the index of the key if it exists else returns -1;
  int low = 0, high = n - 1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (key > arr[mid])
    {
      low = mid + 1;
    }
    else if (key < arr[mid])
    {
      high = mid - 1;
    }
  }
  return -1;
}
int delete_from_sorted_array(int arr[], int n, int key)
{
  if (n >= capacity)
  {
    return n;
  }
  int index = binary_search(arr, n, key);
  if(!index){
    return -1;
  }
  else{
    for (int i = index; i < n-1;i++){
      arr[i] = arr[i + 1];
    }
  }
  return n - 1;
  //* This method takes O(n) in the worst case
  //* This method takes O(log n) auxiliary space.
}
int main()
{

  return 0;
}