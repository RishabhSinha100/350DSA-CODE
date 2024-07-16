#include <iostream>
#include <string>

#include<vector>

using namespace std;
void swap(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

void permute(std::string s, int l, int r, vector<string>&temp) {

    if (l == r) {
       temp.push_back(s);
        
    } else {
        for (int i = l; i <= r; i++) {
            swap(s[l], s[i]);
            permute(s, l + 1, r,temp);
            swap(s[l], s[i]); 
        }
    }
}

int main() {
    string input_string = "abcde";
    int n = input_string.length();
     vector<string> temp;

    permute(input_string, 0, n - 1,temp);
      for (const auto& permute : temp) {
        cout << "{ " << permute << " }" << endl;
    }
    return 0;
}
