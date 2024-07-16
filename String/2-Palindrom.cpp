#include <iostream>
#include <string>

using namespace std;

// Function to reverse a string
bool Palindrom(string &str)
{
    int n = str.length();
    int e = n - 1;
    int s = 0;
    bool sine = true;
    while (s < e)
    {

        if (str[s] == str[e])
        {
            sine = true;
            s++;
            e--;
        }
        else
        {
            sine = false;
            return sine;
        }
    }
}

int main()
{
    string str = "RAAIIAR";
    if (Palindrom(str))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    cout << "    " << endl;
    cout << str;

    return 0;
}
