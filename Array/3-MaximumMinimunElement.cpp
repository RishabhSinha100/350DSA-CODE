#include <iostream>
using namespace std;
#include <algorithm>

int Getmaximum(int arr[], int n)
{
    int max = -99999999;
    int i = 0;
    while (n)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        n--;
        i++;
    }

    return max;
}

int Getminimum(int arr[], int n)
{
    int min = 99999999;
    int i = 0;
    while (n)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        i++;
        n--;
    }

    return min;
}


int main()
{
    int arr[6] = {1, 1, 3, 2, 5, 1};
    int n = 6;

cout<<Getmaximum(arr,n)<<"     "<<Getminimum(arr,n);

   return 0;
}