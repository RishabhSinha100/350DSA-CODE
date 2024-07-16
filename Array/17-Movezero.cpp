#include <iostream>
using namespace std;
#include <algorithm>


void zero( int arr[],int n){

    int i=0;
     for ( int j= 0; j<n; j++)
     {
        if(arr[j]!=0){
            swap(arr[i++],arr[j]);
            
        }
     }
     
}


int main() {
 int arr[]={0,2,1,0,0,22 ,1,0,0};
  int n=9;
zero(arr,n);
for ( int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}


 
return 0;
}
