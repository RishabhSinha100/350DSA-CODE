
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            int number = i;
            bool sinha = true;
            while (number > 0) {
                int digit = number % 10;
                if (digit == 0 || i % digit != 0) {
                    sinha = false;
                    break;
                }
                number = number / 10;
            }
            if (sinha) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
