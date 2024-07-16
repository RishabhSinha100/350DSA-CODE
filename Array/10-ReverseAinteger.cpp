#include <iostream>
using namespace std;
#include <algorithm>

 int reverse(int n){

   int temp;
    int rev=0;
   while ( n)
   {
    temp=n%10;
    rev=rev*10+temp;
     n=n/10;

   }
   return rev;
   

 }
 
 

int main()
{
 int n;
 cin>>n;
cout<< reverse(n);
}





