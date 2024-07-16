class Solution {
public:
    string maximumOddBinaryNumber(string s) {
    int zero=0;
    int one=0;
    string str;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1'){
            one++;
        }
        else{
            zero++;
        }
    }

    for(int i=0;i<one-1;i++){
     str+='1';
    }
     for(int i=0;i<zero;i++){
     str+='0';
    }
    str+='1';
        return str;
    }
};