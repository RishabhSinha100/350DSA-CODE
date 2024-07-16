

#include <iostream>
using namespace std;
#include <algorithm>

 int Secondlargest(int arr[],int n){
    
     int largest=arr[0];
     int secondlargest=-1;
     for ( int i = 1; i < n; i++)
     {
        if ( arr[i]>largest)
        {
            secondlargest=largest;
            largest=arr[i];
        }
        else if( arr[i]<largest && arr[i]>secondlargest)
        {
   secondlargest=arr[i];
        
        }
     }
     return secondlargest;

 }


int main()
{
    int arr[] = {2,10,4,5,4,45,454,445,7,8,91,92,95,10};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    cout<<" "<<"second largest elemet "<< "  "<<Secondlargest(arr,n);
    
   
}

