class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> count;
        for(int i=0;i<words.size();i++){
            string s=words[i];
            int n=s.length();
             for(int j=0;j<n;j++){
                if(x==s[j]){
                count.push_back(i);
                break;
             }
        }
        }
        return count;
    }
};