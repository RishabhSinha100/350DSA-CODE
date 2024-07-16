// #include <iostream>
// using namespace std;
// #include <algorithm>
// #include<vector>
// std::vector<int> unionn(int arra[],int arrb[],int n, int m){
//      int i=0;
//      int j=0;
//      vector<int>ans;
// while(i<n&&j<m){

//   while(i+1<n && arra[i]==arra[i+1]){
//     i++;
//   }
//    while(j+1<m && arrb[j]==arrb[j+1]){
//     j++;
//   }

//   if(arra[i]<arrb[j]){
//     ans.push_back(arra[i++]);
//     // cout<<arra[i++];
//   }
//   else if( arrb[j]<arra[i]){
//     ans.push_back(arrb[j++]);
//     // cout<<arrb[j++];
//   }

//   else{
//     ans.push_back(arrb[j++]);
//     // cout<<arrb[j++];
//     i++;

//   }
// }

// while(i<n){
//      while(i+1<n&& arra[i]==arra[i+1]){
//     ans.push_back(arra[i++]);
//     // i++;
//     // cout<<arra[i++];


//      }
    
// }
// while(j<m){
//      while(j+1<m&& arrb[j]==arrb[j+1]){
//     ans.push_back(arrb[j++]);
//     // j++;
//     // cout<<arrb[j++];


//      }
    
// }
// return ans;
// }


// int main()
// {
//     int arra[] = {1, 3, 5, 9, 9};
//     int arrb[] = { 3, 5, 5};
//      int n=6,m=3;
//    vector<int>ans;
// ans=unionn(arra,arrb,n,m);
//    for (size_t i = 0; i < ans.size(); i++) { // Use `size_t` to avoid signed/unsigned issues
//         std::cout << ans[i] << " "; // Index-based access
//     }

   
//     std::cout << std::endl;
    
 


  
// }


#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> unionn(const int arra[], const int arrb[], int n, int m) {
    int i = 0;
    int j = 0;
    std::vector<int> ans;

    while (i < n && j < m) {
        // Avoid duplicates within the same array
        while (i + 1 < n && arra[i] == arra[i + 1]) {
            i++;
        }
        while (j + 1 < m && arrb[j] == arrb[j + 1]) {
            j++;
        }

        if (arra[i] < arrb[j]) {
            ans.push_back(arra[i]);
            i++;
        } else if (arra[i] > arrb[j]) {
            ans.push_back(arrb[j]);
            j++;
        } else {
            // If they're equal, add only once and move both pointers
            ans.push_back(arra[i]);
            i++;
            j++;
        }
    }
    // Add remaining elements from arra
    while (i < n) {
        if (ans.empty() || ans.back() != arra[i]) {
            ans.push_back(arra[i]);
        }
        i++;
    }

    // Add remaining elements from arrb
    while (j < m) {
        if (ans.empty() || ans.back() != arrb[j]) {
            ans.push_back(arrb[j]);
        }
        j++;
    }

    return ans;
}

int main() {
    int arra[] = {1, 2, 3, 4, 4,5};
    int arrb[] = {3, 5, 6,6,7,8};
    int n = sizeof(arra) / sizeof(arra[0]); // Corrected array length
    int m = sizeof(arrb) / sizeof(arrb[0]); // Corrected array length

    std::vector<int> ans = unionn(arra, arrb, n, m);

    for (const auto& value : ans) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    return 0;
}



