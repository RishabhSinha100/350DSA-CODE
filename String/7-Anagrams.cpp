#include <iostream>
#include <string>

using namespace std;

void selectionSort(string& str) {
    int n = str.length();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (str[j] < str[i]) {
                char ch=str[i];
                str[i]=str[j];
                str[j]=ch;
            }
        }
    }
}




int main() {
    string str = "ishu";
    string str1="shui";


    selectionSort(str);
    selectionSort(str1);
     if(str==str1){
        cout<<"it is Anagram";
     }
      else{
        cout<<"it is not Anagram";
      }




    return 0;
}
