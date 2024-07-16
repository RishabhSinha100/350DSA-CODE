#include <iostream>
#include <string>

using namespace std;

// Function to convert a string to uppercase
string toupper(string &str)
{
    char ch;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            ch = str[i] - 'a' + 'A';
            str[i] = ch;
        }
    }
    return str;
}

