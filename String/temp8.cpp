
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 bool Ifalphabet(char c) {
        return c >= 'a' && c <= 'z'; 
    }

    bool checkIfPangram(string sentence) {
        for(int i=0; i<sentence.size(); i++){
            char c='a';
            bool sine;
            if(Ifalphabet(c)==sentence[i]){
             sine =true;
            }
            else{
                return false;
            }
        }
    return true;
        }
int main() {
    string s;
    cin >> s;
 if(checkIfPangram(s)){
    cout<<true;
 }
 else{
    cout<<false;
 }
}