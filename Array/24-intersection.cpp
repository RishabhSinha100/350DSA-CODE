#include <iostream>
using namespace std;
#include <algorithm>
#include<vector>
void  intercetion(int arra[],int arrb[],int n, int m){
     int i=0;
     int j=0;
     vector<int>ans;
while(i<n&&j<m){

    if(arra[i]<arrb[j]){
        i++;
    

    }
        if(arra[i]>arrb[j]){
        j++;
    }
    if(arra[i]==arrb[j]){
           cout<<arra[i]<<"      ";
        i++;
        j++;
    }

}

}


int main()
{
    int arra[] = {1,2,2,1};
    int arrb[] = {2,2};
    
     int n=4,m=2;

intercetion(arra,arrb,n,m);
  

return 0;
}




