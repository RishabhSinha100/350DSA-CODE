#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string longestPalindrome(string s)
{
    int oddans = 0;
    int eventans = 0;
    int n = s.size();
    string so, se;
    for (int i = 0; i < n; i++)
    {
        int cur = 1;
        int st = i - 1, e = i + 1;
        while (st >= 0 && e < n && s[st] == s[e])
        {
            cur += 2;
            st--;
            e++;
        }
        if (cur > oddans)
        {
            oddans = cur;
            so = s.substr(i - cur / 2, cur);
        }
    }
    for (int i = 1; i < n; i++)
    {
        int cur = 0;
        int st = i - 1, e = i;
        while (st >= 0 && e < n && s[st] == s[e])
        {
            cur += 2;
            st--;
            e++;
        }
        if (cur > eventans)
        {
            eventans = cur;
            se = s.substr(i - cur / 2, cur);
        }
    }
    if (eventans > oddans)
    {
        return se;
    }
    else
    {
        return so;
    }
}

int main()
{
    string s;
    cin >> s;
    cout << longestPalindrome(s);
}
