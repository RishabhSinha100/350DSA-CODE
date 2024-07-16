#include <iostream>
using namespace std;
#include <algorithm>

void Peak(int arr[], int n)
{
    int end = n - 1;
    int start = 0;
    while (start < end)
    {
        int temp = 0;

        if (arr[start] = 1)
        {
            start++;
        }

        if (arr[end] == 0)
        {
            end--;
        }

        if (arr[start] == 0 && arr[end] == 1)
        {
            swap(arr[start++], arr[end--]);
        }
    }
}

int main()
{
    int arr[] = {0, 0, 1, 0, 0, 1, 1, 0, 0};
    int n = 9;
    Peak(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
