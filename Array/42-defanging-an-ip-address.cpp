class Solution {
public:
    string defangIPaddr(string address) {
         int n=address.length();
         string st;
         string fst="[";
         string snd="]";
         for( int i=0;i<n;i++){
            if(address[i]!='.'){
                st+=address[i];
            }
            else{
                st+=fst;
                st+=address[i]
                st+=snd;
            }
         }
         return st
    }
};