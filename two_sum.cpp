#include <iostream>
#include <vector>
using namespace std;
//! Program to find if the sum of any two elements in the array is equal to the given sum
//! This problem can be solved efficiently using the method of hashing ,and the method of Sorting and Two-Pointers technique
bool two_sum_naive(int arr[], int n, int sum)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)

    {
      if (i == j)
      {
        continue;
      }
      if (arr[i] + arr[j] == sum)
      {
        return true;
      }
    }
  }
  return false;
  //* The time complexity of the above method is O(n*n)
  //* This method takes O(1) auxiliary space
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 5};
  int n = 6;
  int sum = 4;
  string res = two_sum(arr, n, sum) ? "Two sum exists" : "Two sum does not exist";
  cout << res;
  return 0;
}