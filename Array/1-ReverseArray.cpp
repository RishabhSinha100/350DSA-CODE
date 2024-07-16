#include <iostream>
using namespace std;
#include <algorithm>

int main() {
 int arr[5]={1,2,3,4,5};
 int n=5-1;
 int size=n;
while (n>=0)
{
    cout<<arr[n]<<" "<<endl;
    n--;
}

for ( int i = size; i >=0; i--)
{
    cout<<arr[i]<<" ";
    
}



    

return 0;
}
