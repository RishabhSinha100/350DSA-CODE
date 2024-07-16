#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}


int missingvalue(int arr[], int n)
{

    sort(arr, n);
    int i = 0, k = 0;
    while (i < n - 1)
    {
        if (arr[i] + 1 == arr[i + 1])
        {
            i++;
        }
        else
        {
            return arr[i] + 1;
        }
    }
}

int main()
{
    int arra[] = {5, 2, 3, 4, 1, 9, 7, 10};

    int n = 8, m = 3;

    cout << missingvalue(arra, n);
}
