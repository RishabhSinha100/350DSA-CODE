#include <iostream>
using namespace std;
#include <algorithm>

void reverse(int n, int arr[])
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start++], arr[end--]);
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    reverse(n, arr);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}










// while (start<=end)
// {
//  swap(arr[start++],arr[end--]);

// }

// int temp=0;
//    while (start<=end)
//     {

// temp=arr[start];
// arr[start]=arr[end];
// arr[end]=temp;
// start++;
// end--;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i];
//         cout<<" ";

//     }

// return 0;
//       }