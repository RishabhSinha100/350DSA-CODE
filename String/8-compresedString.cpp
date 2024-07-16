#include <iostream>
#include <string>
#include <vector>
using namespace std;

string compressString(const string &str)
{
    if (str.empty())
    {
        return "";
    }
    int i = 0;
    string compressed;
    int count = 0;

    while (i < str.length())
    {

        int j = i + 1; // Correct placement of semicolon

        // Counting consecutive characters
        while (j < str.length() && str[i] == str[j])
        {
            j++;
        }

        count = j - i;

        if (count > 1)
        {
            compressed += str[i];
            compressed += to_string(count);
        }
        else
        {
            compressed += str[i];
        }

        i = j;
    }

    return compressed;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string compressed = compressString(str);
    cout << "Compressed string: " << compressed << endl;

    return 0;
}
