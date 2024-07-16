class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
         for( int i=0;i<nums.size()-1;i++){
             for( int j=i+1;j<nums.size();j++){
                if(nums[i]>nums[j]){
                 int a=nums[i];
                 nums[i]=nums[j];
                 nums[j]=a;
             }
         }
    }
     int count=0;
    for( int i=0;i<nums.size();i++){
        if(k>nums[i]){
            count++;
        }
    }
    return count;
    }
};