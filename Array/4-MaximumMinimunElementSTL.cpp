#include <iostream>
using namespace std;
#include <algorithm>
#include<cmath>

int Getmaximum(int arr[], int n)
{
    int maxi = -99999;
    int i=0;
    while (n)
    {
        
    
    maxi=max(maxi,arr[i++]);
    n--;
    }
  
    return maxi;
}

int Getminimum(int arr[], int n)
{
     int i=0;
    int mini = 999999;
    while(n){
    mini=min(mini,arr[i]);
    n--;
    i++;
    }
     
    return mini;
}


int main()
{
    int arr[6] = {1, 9, 3, 2, 0, 1};
    int n = 6;
     

cout<<Getmaximum(arr,n)<<"     "<<Getminimum(arr,n);

   return 0;
}