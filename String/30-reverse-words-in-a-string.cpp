class Solution {
public:
    string reverseWords(string s) {
         int ss=0;
        for(int i=0;i<=s.length();i++){
            if(i==s.length()||s[i]==' '){
                
                int len=i-1;
                while(ss<len){
                   char temp=s[ss];
                   s[ss]=s[len];
                   s[len]=temp;
                   ss++;
                   len--;
                }
                ss=i+1;
            }
        }
        return s;
    }
};