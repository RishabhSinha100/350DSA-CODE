class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
         int n=nums1.size();
         for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums1[i] > nums1[j]) {
                int temp = nums1[i];
                nums1[i] = nums1[j];
                nums1[j] = temp;
            }
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums2[i] > nums2[j]) {
                int temp = nums2[i];
                nums2[i] = nums2[j];
                nums2[j] = temp;
            }
        }
    }
     int k=0;
     int first=nums1[k];
     int second=nums2[k];
return second-first;

    }
};