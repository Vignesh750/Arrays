#include <iostream>
using namespace std;
//! Program to find the majority element in an array if it exists.
//! An element in an array is called a majority element if it appears more than n/2 times in an array.
//! where n is the size of the array.

int naive(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int count = 1;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
      }
      if (count > n / 2)
      {
        return i;
      }
    }
  }
  return -1;
  //* The time complexity of this solution is O(n*n) for it runs two for loops.
}
int efficient(int arr[], int n)
{
  //* This algorithm takes O(n) time and O(1) space.
  //* This algorithm is called as Moore's algorithm
  //* This algorithm may not give the index of the first occurence of the element
  //* This algorithm works on the fact that if an element occurs more than N / 2 times,
  //* it means that the remaining elements other than this would definitely be less than N / 2.
  //* First choose a candidate from the given set of elements if it is the same as the candidate element, increase the votes.
  //* Otherwise, decrease the votes if votes become 0,
  //* select another new element as the new candidate.
  /*https://www.geeksforgeeks.org/boyer-moore-majority-voting-algorithm/*/

  //* PHASE ONE GIVES THE POSSIBLE MAJORITY ELEMENT

  int res = 0;
  int count = 1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == arr[res])
    {
      count++;
    }
    else
    {
      count--;
    }
    if (count == 0)
    {
      res = i;
      count = 1;
    }
  }

  //* PHASE 2 CHECKS IF THE ELEMENT OCCURS MORE THAN N/2 TIMES.
  count = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[res] = arr[i])
    {
      count++;
    }
  }
  if (count <= n / 2)
  {
    res = -1;
  }
  return res;
}
int main()
{
  int arr[] = {6, 8, 4, 8, 8};
  int n = sizeof(arr) / sizeof(int);
  cout << naive(arr, n) << endl;
  cout << efficient(arr, n);
  //* This efficient method does not necessarily give 
  //* the index of the first occurence of the majority element but gives any of the index of the majority
  return 0;
}