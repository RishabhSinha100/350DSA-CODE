class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum2=0;
        for(int i=0;i<accounts.size();i++){
            vector<int>temp=accounts[i];
            int sum=0;
            for(int j=0;j<temp.size();j++){
               sum+=temp[j];
            }
            if(sum2<sum){
                sum2=sum;
            }
            else{
                sum2=sum2;
            }

        }
        return sum2;
    }
};