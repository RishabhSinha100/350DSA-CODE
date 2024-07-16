
#include <iostream>
using namespace std;
#include <algorithm>

 int Removeduplicate(int arr[],int n){
sort(arr,arr+n); 
 int i=0;
 for ( int j = 1; j < n; j++)
 {
    if (arr[i]!=arr[j]){
        ++i;
        arr[i]=arr[j];
    }
    
 }
 return i+1;
 }


int main()
{   
    int arr[] = {1, 2, 3, 3,9,9,9,9,9, 9, 9};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

   cout<<" the value of index"<< Removeduplicate(arr,n);
   int size=Removeduplicate(arr,n);
cout<<" "<<endl;

   for ( int  i = 0; i < size; i++)
   {
    cout<<arr[i];
   }
   
   
}

