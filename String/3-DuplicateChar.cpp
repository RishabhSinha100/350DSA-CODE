#include <iostream>
#include <string>

using namespace std;

char mostFrequentChar(const string &str)
{
    int arr[26] = {0};

    // Count occurrences of each character (case-insensitive)
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z')
        {
            arr[ch - 'a']++;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            arr[ch - 'A']++;
        }
    }

    // Find the character with the maximum count
    int maxCount = -1;
    char mostFrequent = 'a';
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > maxCount)
        {

            maxCount = arr[i];
            mostFrequent = 'a' + i;
        }
    }

    return mostFrequent;
}

int main()
{
    string str = "rbbBBbbBcccccBiar is khan";

    cout << "The most frequent character is: " << mostFrequentChar(str) << endl;

    return 0;
}
