class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      vector<int>ans;
      int k=0;
      ans.push_back(0);
      ans.push_back(gain[k]);
      for( int i=1;i<gain.size();i++){
        ans.push_back(gain[i]+ans[i]);
      }

     int max=-99999;
     for( int i=0;i<ans.size();i++){
         if(max<ans[i]){
            max=ans[i];
         }
     }
     return max;   
    }
};