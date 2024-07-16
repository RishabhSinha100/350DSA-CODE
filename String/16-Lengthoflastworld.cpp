 #include <iostream>
#include <vector>
#include <algorithm>
using namespace std;




 int ff(string s){
              int e=s.length()-1;
        if(s.length()==1){
            return s.length() ;
        }
         int x=0;
          int length=0;

           while(e>=0&&s[e]==' '){
                   e--;
           }
           while(s[e]!=' '&&e>=0){
                length++;
                e--; 
           }

            return length;
 }

 int main (){

 
string s = "a ab holu  ";
 cout<<ff(s);

 }
    

