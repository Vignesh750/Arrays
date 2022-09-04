#include <iostream>
using namespace std;
//! Coding implementation of inserting an element at the end of an unsorted array:
int insert_at_end(int arr[], int n, int capacity, int key)
{
  if (n >= capacity)
  {
    return n;
  }
  arr[n - 1] = key;
  return n + 1;
}

//! Program to insert an element in to an unsorted array at a given position
//! Insert operation in an array at any position can be performed by shifting elements to the right,
//! which are on the right side of the required position
int insert_at_given_position(int arr[], int n, int key, int pos, int capacity)
{
  if (n >= capacity)
  {
    return n;
  }
  int i = n - 1;

  while (i > pos)
  {
    arr[i + 1] = arr[i];
    i--;
  }
  arr[pos] = key;
}
int main()
{

  return 0;
}