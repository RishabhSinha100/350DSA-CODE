class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
                vector<pair<int, string>> height;
        
             for (int i = 0; i < names.size(); ++i) {
            height.push_back({heights[i], names[i]});
        }
             sort(height.rbegin(), height.rend());

        
        vector<string> sNames;
         for (int i = 0; i < height.size(); ++i) {
        sNames.push_back(height[i].second);
         }
        return sNames;
    }
};