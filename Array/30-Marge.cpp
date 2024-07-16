#include <iostream>
#include <algorithm>
using namespace std;

void merge(int *arr, int s, int e)
{

  int mid = (s + e) / 2;
  int len1 = mid - s + 1;
  int len2 = e - mid;

  int first[len1] = {};
  int second[len2] = {};

  int mains = s;
  for (int i = 0; i < len1; i++)
  {
    first[i] = arr[mains++];
  }

  
  mains = mid + 1;
  for (int i = 0; i < len2; i++)
  {
    second[i] = arr[mains++];
  }

  int index = 0;
  int index2 = 0;
  mains = s;
  while (index < len1 && index2 < len2)
  {
    if (first[index] < second[index2])
    {
      arr[mains++] = first[index++];
    }
    else
    {
      arr[mains++] = second[index2++];
    }
  }

  while (index < len1)
  {
    arr[mains++] = first[index++];
  }

  while (index2 < len2)
  {
    arr[mains++] = second[index2++];
  }
}








void sortt(int *arr, int s, int e)
{
  if (s >= e)
  {
    return;
  }

  int mid = (s + e) / 2;
  sortt(arr, s, mid);
  sortt(arr, mid + 1, e);
  merge(arr, s, e);
}




int main()
{
  int arr[8] = {1, 5, 6, 48, 5, 6, 7, 9};
  int n = 8;
  sortt(arr, 0, n - 1);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
