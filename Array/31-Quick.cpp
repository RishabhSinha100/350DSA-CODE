#include <iostream>
#include <algorithm>
using namespace std;

int partition(int arr[], int s, int e)
{
   int pivot =arr[s];
   int cnt =0;



   for ( int i = s+1; i <=e; i++)
   {
   if ( arr[i]<=pivot)
      {
    cnt++;
      }
   
   }

 
//place pivot at right position
 int pivotindex=s+cnt;

 swap(arr[pivotindex],arr[s]);

  int i=s,j=e;

  while (i<pivotindex && j> pivotindex){

    while (arr[i]<pivot)
    {
      i++;
    }

    while (arr[j]>pivot)
    {
      j--;
    }
    
    if ( i<pivotindex&& j>pivotindex)
    {
      swap(arr[i++],arr[j--]);
    }
    

}
}




void quiclsort(int *arr, int s, int e)
{
  if (s >= e)
  {
    return;
  }

 int p= partition(arr,s,e);

 quiclsort(arr,s,p-1);
 quiclsort(arr,p+1,e);
  
}





int main()
{
  int arr[8] = {1, 5, 6, 48, 5, 6, 7, 9};
  int n = 8;
  quiclsort(arr, 0, n - 1);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
