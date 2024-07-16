#include <iostream>
using namespace std;
#include <algorithm>

/////////////////////////// ye mujhe nhu samjh nhinaya 
 int  search( int arr[],int n,int sea){

 int s=0;
 int e=n;
  int mid;
 while(s<e){
  mid=(s+e)/2;
   if( arr[mid]==sea){
     return mid;
   }

   if (arr[mid]<sea)
   {
    s=mid;
   }

   if (arr[mid]>sea)
   {
    e=mid;
   }

   
 }
 
return -1;
 

}

int main() {
 int arr[]={1,2,3,4,5,6};
  int n=6;
 int sea=3;

cout<<search(arr,n,sea);

 

 
return 0;
}
