#include <iostream>
#include <string>

using namespace std;

bool areRotations(string s1, string s2) {
    // Check if lengths of both strings are equal
    if (s1.length() != s2.length())
        return false;

    // Concatenate s1 with itself
    string concatenated = s1 + s1;

    // Check if s2 is a substring of concatenated string
    if (concatenated.find(s2) != string::npos)
        return true;
    else
        return false;
}

int main() {
    string s1 = "ABCD";
    string s2 = "CDAB";

    if (areRotations(s1, s2))
        cout << "Strings are rotations of each other." << endl;
    else
        cout << "Strings are not rotations of each other." << endl;

    return 0;
}
