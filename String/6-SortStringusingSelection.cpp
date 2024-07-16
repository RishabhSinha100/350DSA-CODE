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
    string str = "ijab";

    cout << "Original string: " << str << endl;

    selectionSort(str);

    cout << "Sorted string: " << str << endl;

    return 0;
}
