#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool RotationOfAnother(string S1, string S2)
{
    int k = 2;
    int n = S1.length();
    vector<string> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = S1[i];
    }

    // Combine the vector elements into a single string
    string rotatedString;
    for (const string &s : temp)
    {
        rotatedString += s;
    }

    // Compare rotatedString with S2
    if (rotatedString == S2)
    {
        cout << "The rotated string matches S2." << endl;
        return true;
    }
    else
    {
        cout << "The rotated string does not match S2." << endl;
        return false;
    }
}

int main()
{
    string S1 = "ABCD", S2 = "CDAB";
    RotationOfAnother(S1, S2);
    return 0;
}
