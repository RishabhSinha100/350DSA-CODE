#include <iostream>
using namespace std;
#include <algorithm>

bool Peak(int arr[], int n)
{
  bool febhai = true;
  for (int i = 1; i < n - 1; i++)
  {

    if (arr[i - 1] + arr[i] == arr[i + 1])
    {
      febhai = true;
    }
    else
    {
      febhai = false;
      return febhai;
    }
  }
  return febhai;
}

int main()
{
  int arr[] = {0, 1, 1, 2, 3, 5, 8};
  int n = 7;

  if (Peak(arr, n))
  {
    cout << "Febonoci hai";
  }
  else
  {
    cout << "Febonoci nhi  hai";
  }

  return 0;
}
