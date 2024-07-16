#include <iostream>
using namespace std;
#include <algorithm>

 int Oddeven( int n){
    if(n%2==0||n==0){
   
         return true;
    }
   else if(n%2!=0||n==1){
     
        return false;

   }
 }


int main (){
     int n;
     cin>>n;
    if(Oddeven(n)){
        cout<<"The number is even";
    }
     else{
         cout<<" The Number is Odd";
     }
     
      
}