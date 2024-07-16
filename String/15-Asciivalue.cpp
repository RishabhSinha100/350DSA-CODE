#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string s= "Hello";   


     int sum=0;
         for(int i = 0; i < s.length()-1; ++i) {
          int  first=(s[i]);
         int second=(s[i+1]);
         if(first>second){
         sum=first-second;
         }
         else{
         sum=second-first;

         }
          
        
    }
   std:: cout<<sum;
}


