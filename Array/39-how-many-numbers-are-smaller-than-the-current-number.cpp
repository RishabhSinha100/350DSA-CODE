class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
         vector<int>ans;
          for(int i=0;i<nums.size();i++){
                int value=nums[i];
                  int count=0;
            for(int j=0;j<nums.size();j++){
                if( value>nums[j]){
                    count++;
                }
            }
            ans.push_back(count);
          }
          return ans;
    }
};