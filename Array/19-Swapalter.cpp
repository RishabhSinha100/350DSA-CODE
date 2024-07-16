#include <iostream>
using namespace std;
#include <algorithm>


void Peak( int arr[],int n){

for ( int  i = 0; i < n; i++)
{
   int temp=0;
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
    i++;
}

}

int main() {
 int arr[]={1,2,3,4,5,6,7,9};
  int n=8;
Peak(arr,n);
for ( int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}


 
return 0;
}
