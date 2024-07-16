
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> unionn(const int arr[],  int n, int s) {
    
    int j = 0;
     int sum=0;
   for (int i = 0; i < n; i++)
   {
    sum+=arr[i];

     while (s<sum &&j<i)
    {
        sum-=arr[j++];
    }
    if(sum==s){
        return{j+1,i+1};
    }
    
   }
    return {-1};


}

int main() {
    int arra[] = {1, 2, 5, 9, 9};
 
    int n = sizeof(arra) / sizeof(arra[0]); // Corrected array length
     int s=9;

       std::vector<int> ans =unionn(arra,n, s);
   for (const auto& value : ans) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}
 




