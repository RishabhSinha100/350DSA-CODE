#include <iostream>
#include <string>
#include<vector>

using namespace std;


void Subset(string t, int i ,int n ,string str) {
     //base
     if(i==n){
       cout<<t<<endl;
     }  

    else{
        Subset(t,i+1,n,str);
        t=t+str[i];
        Subset(t,i+1,n,str);
    }
}

int main() {

 string str;
  cin>>str;
  string t=" ";
  Subset(t,0,str.length(),str);

    return 0;
}

