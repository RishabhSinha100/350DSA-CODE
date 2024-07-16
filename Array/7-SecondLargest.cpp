#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    int arr[] = {5, 2, 9, 3, 7, 9, 9}; // Example array with repeated elements
    int size = sizeof(arr) / sizeof(arr[0]);
   int badabhai=-999;
    int chotbhai=-999;


        for ( int i = 0; i < size; i++)
        {
            if ( arr[i]>badabhai)
            {
            chotbhai=badabhai;
            badabhai=arr[i];

            }
             else if( chotbhai<arr[i]&& badabhai>arr[i]){
                chotbhai=arr[i];
             }
            
        }

  
        cout << "Second largest element in the array: " << chotbhai;





    return 0;
}
