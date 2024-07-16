class Solution {
public:
    string truncateSentence(string s, int k) {
        string second;
        int space=0;
int i=0;
        while(i<s.length()){
            if(s[i]==' '){
                space++;
                if(space==k){
                    break;
                }
            }
            second+=s[i];
            i++;

        }
        return second;
    }
};