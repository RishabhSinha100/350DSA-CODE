#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Subset(string str, string temp, int i, vector<string>& ans) {
    if (i == str.size()) {
        ans.push_back(temp);
        return;
    }

    Subset(str, temp, i + 1, ans);

    char element=str[i];
    temp.push_back(element);
    Subset(str, temp, i + 1, ans);
}

int main() {
    string str;
    
    cout << "Enter the string: ";
    cin >> str;

    cout << "String: " << str << endl;

    string temp;
    vector<string> ans;
    Subset(str, temp, 0, ans);

    cout << "Subsequences: " << endl;
    sort(ans.begin(), ans.end());
    for (const auto& subset : ans) {
        cout << "{ " << subset << " }" << endl;
    }

    return 0;
}
