#include <iostream>
using namespace std;
#include <algorithm>

 int PowOfnm( int n, int m){
      int pow=1;
      while (m)
      {
        pow=n*pow;
        m--;
      }
      return pow;
 }


int main (){
     int n,m;
     cin>>n>>m;
    cout<<PowOfnm(n,m);
     
      
}