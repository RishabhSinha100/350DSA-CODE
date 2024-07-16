#include <iostream>
using namespace std;
#include <algorithm>


void  sort( int arr[],int n){

int counter=1;
 while ( counter<n)
 {
 for ( int i = 0; i < n-counter; i++)
 {
    if ( arr[i]>arr[i+1])
    {
        int temp;
         temp=arr[i];
         arr[i]=arr[i+1];
         arr[i+1]=temp;

    }
    
 }
 counter++;
 
 }
 

 

}

int main() {
 int arr[]={2,3,1,1000,5};
  int n=5;

sort(arr,n);

 for (int i = 0; i < n; i++)
 {
    cout<<arr[i]<<" ";
 }
 

 
return 0;
}
