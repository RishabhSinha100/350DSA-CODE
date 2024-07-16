class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string second(s.length(), ' ');
        for(int i=0;i<s.length();i++){
           int index=indices[i];
           second[index]=s[i];
        }
        return second;
    }
};