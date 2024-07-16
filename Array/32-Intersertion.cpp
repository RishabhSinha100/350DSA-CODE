#include <iostream>
using namespace std;
#include <algorithm>

/////////////////////////// ye mujhe nhu samjh nhinaya
void sort(int arr[], int n)
{

    int counter = 1;
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {

                // ruk jao
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[] = {2, 3, 1, 1000, 5};
    int n = 5;
    sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
