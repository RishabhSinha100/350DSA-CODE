
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merge;
        int w1len = word1.length();
        int w2len = word2.length();
        int minLength;
        
     
        if (w1len < w2len) {
            minLength = w1len;
        } else {
            minLength = w2len;
        }

      
        for (int i = 0; i < minLength; ++i) {
            merge += word1[i];
            merge += word2[i];
        }
        if (w1len > w2len) {
            for (int i = minLength; i < w1len; ++i) {
                merge += word1[i];
            }
        } else if (w1len < w2len) {
            for (int i = minLength; i < w2len; ++i) {
                merge += word2[i];
            }
        }

        return merge;
    }
};


