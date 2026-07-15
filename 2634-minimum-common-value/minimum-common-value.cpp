class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> freq;
        for(int x : nums2) {
            freq.insert(x);
        }
        for (int x : nums1) {
            if (freq.find(x) != freq.end()) {
                return x;
            }
        }
        return -1;
    }
};