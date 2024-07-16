class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0;
         int n=nums.size();
        for( int i=1;i<=nums.size();i++){
           if(n%i==0){
             int s=nums[i-1];
            
            s=s*s;
            sum+=s;
           }
        }
        return sum;
    }
};