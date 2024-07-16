class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
          
          int maincount=0;
        for(int i=0;i<sentences.size();i++){
            string s=sentences[i];
            int n=s.length();
            int count=1;
             for(int j=0;j<n;j++){
               if(s[j]==' '){
                count++;
               }
               if(maincount<=count){
                maincount=count;
               }
             }
        }
        return maincount;
        }
    
    
};