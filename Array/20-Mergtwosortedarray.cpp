#include <iostream>
using namespace std;
#include <algorithm>

void merge(int arrA[], int arrb[], int arrc[], int n, int m)
{
    int k = 0;
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (arrA[i] > arrb[j])
        {
            arrc[k++] = arrb[j++];
        }
        else
        {
            arrc[k++] = arrA[i++];
        }
    }

    while (i < n)
    {
        arrc[k++] = arrA[i++];
    }
    while (j < m)
    {
        arrc[k++] = arrb[j++];
    }
}

int main()
{
    int arrA[] = {2, 6, 7, 8, 9};
    int arrb[] = {1, 2, 3};
    int arrc[] = {0};
    int n = 5;
    int m = 3;
    merge(arrA, arrb, arrc, n, m);
    for (int i = 0; i < 8; i++)
    {
        cout << arrc[i] << " ";
    }

    return 0;
}
