#include <iostream>
using namespace std;
#include <algorithm>

 int Duplicate(int arr[],int n){

  sort(arr, arr + n);
   int j=1;
 for ( int i = 0; i < n; i++)
 {
    if ( arr[i]==arr[j])
    {
         return arr[i];
    }
      j++;
 }
 }
 
 

int main()
{
    int arr[6] = {1, 3, 5, 2, 9, 9};
    int n = 6;
   cout<< Duplicate(arr,n);
}





