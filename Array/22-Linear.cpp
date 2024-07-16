#include <iostream>
using namespace std;
#include <algorithm>

/////////////////////////// ye mujhe nhu samjh nhinaya 
 int  search( int arr[],int n,int sea){
 int i=0;
 while (n)
 {
    if ( arr[i]==sea)
    {
        return i;
    }
    i++;
    n--;
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
