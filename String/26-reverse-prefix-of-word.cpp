class Solution {
public:
    string reversePrefix(string word, char ch) {
          int index;
          bool b=false;
          for(int i=0;i<word.size();i++){
          if(word[i]==ch){
             index=i;
             b=true;
             break;
          }
        
    }
    if(b==false){
        return word;
    }
    int i=0;
  while(i<index){
    char temp=word[i];
    word[i]=word[index];
    word[index]=temp;
    i++;
    index--;
  }

return word;
    }
};