#include <iostream>
#include <string>

using namespace std;

// Function to reverse a string
void reverseString(string &str)
{
    int n = str.length();
    int e = n - 1;
    int s = 0;
    while (s < e)
    {
        char temp;
        temp = str[s];
        str[s] = str[e];
        str[e] = temp;
        e--;
        s++;
    }
}

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;

    cout << "You entered: " << str << endl;
    reverseString(str);
    cout << str;

    return 0;
}
