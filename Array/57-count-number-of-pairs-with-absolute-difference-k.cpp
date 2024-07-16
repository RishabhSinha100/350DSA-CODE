class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
    int count=0;
     for( int i=0;i<nums.size()-1;i++){
        for( int j=i+1;j<nums.size();j++){
             int a=nums[i];
              int b=nums[j];
               if(a>b){
                  if(nums[i]-nums[j]==k){
                    count++;
                  }
               }
               else{
                  if(nums[j]-nums[i]==k){
                     count++;
                  }
               }
        }
        }
        return count;
                                
    }
};