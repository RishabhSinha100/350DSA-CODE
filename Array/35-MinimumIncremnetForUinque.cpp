#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int minIncrementForUnique(vector<int>& nums) {
 
    sort(nums.begin(), nums.end());
    
    int moves = 0;

    for ( int i = 1; i < nums.size(); ++i) {
       
        if (nums[i] <= nums[i - 1]) {
           
            int increment = nums[i - 1] - nums[i] + 1;
            
            moves += increment;
           
            nums[i] += increment;
        }
    }
    
    return moves;
}

int main() {
    vector<int> nums = {3, 2, 1, 2, 1, 7}
    int result = minIncrementForUnique(nums);
    cout << "Minimum increments to make all elements unique: " << result << endl;
    return 0;
}
