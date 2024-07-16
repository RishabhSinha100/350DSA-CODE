#include <iostream>
using namespace std;
#include <algorithm>

int main() {
 int arr[]={2,4,3,4,2};
 int ans=0;
for ( int i = 0; i < 5; i++)
{
 ans=arr[i]^ans;
}
 cout<<ans;


    

return 0;
}
