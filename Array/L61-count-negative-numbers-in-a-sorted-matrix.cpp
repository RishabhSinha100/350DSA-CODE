class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
       int sum=0;
       for( int i=0;i<grid.size();i++){
      
        vector<int>vec= grid[i];
        for( int j=0;j<vec.size();j++){
            if(vec[j]<0){
                sum++;
            }
        }
       }
       return sum; 
    }
};