class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
            int n=words.size();
            int k=s.length();
             int action=false;
        if(n!=k){
            return false;
        }
        for(int i=0;i<words.size();i++){
            string str=words[i];
          if( str[0]==s[i]){
            action=true;
          }
          else{
            return false;
          }

        }
        return action;
    }
};