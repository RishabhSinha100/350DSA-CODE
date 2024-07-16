#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Subset(vector<int> &arr, vector<int> &temp, int i, vector<vector<int>> &ans)
{
    if (i == arr.size())
    {
        ans.push_back(temp);
        return;
    }

    temp.push_back(arr[i]);
    Subset(arr, temp, i + 1, ans);
    temp.pop_back();
    Subset(arr, temp, i + 1, ans);
}

int main()
{
    vector<int> arr = {1, 2, 3};

    vector<int> temp;
    vector<vector<int>> ans;

    Subset(arr, temp, 0, ans);

    for (const auto &subset : ans)
    {
        for (int val : subset)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
