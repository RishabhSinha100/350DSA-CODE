class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
          int i=0;
     int j=0;
           std::sort(nums1.begin(), nums1.end());
        std::sort(nums2.begin(), nums2.end());
     int n=nums1.size();
     int m=nums2.size();
     vector<int>ans;
while(i<n&&j<m){

    if(nums1[i]<nums2[j]){
        i++;
    
    }

   else if(nums1[i]>nums2[j]){
        j++;
    }
         if (nums1[i]==nums2[j]){
           ans.push_back(nums1[i]);
         }    
     i++;
        j++;
}
    return ans;
    }
    
};