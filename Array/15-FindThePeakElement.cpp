#include <iostream>
using namespace std;
#include <algorithm>


int Peak( int arr[],int n){

 for ( int i = 0; i<n; i++)
 {
    if ( i==0  && arr[i]>arr[i+1] )
    {
        return i;
    }
    else if (i==n-1&&arr[i]>arr[i-1])
    {
        return i;
    }
    else if( arr[i]>arr[i-1]&&arr[i]>arr[i+1])
    {
        return i;

    }
 }

 return 0;

}

int main() {
 int arr[]={2,3,6,3,5};
  int n=5;

 int pek=Peak(arr,n);
 cout<<arr[pek];
 
return 0;
}
