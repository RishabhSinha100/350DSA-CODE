class Solution {


public:


 void rev(string&s){
    int start=0;
    int e=s.length()-1;
    while(start<e){
        char ch=s[start];
        s[start]=s[e];
        s[e]=ch;
        start++;
        e--;
    }
 }
    int maximumNumberOfStringPairs(vector<string>& words) {
         int count =0;
      for( int i=0;i<words.size()-1;i++){
           string s=words[i];
           rev(s);
           for( int j=i+1; j<words.size();j++){
            //    if(words[i]==words[j]){
            //     count++;
            //    }
                if(s==words[j]){
                count++;
               }
           }
      } 
      return count ;
    }
};



