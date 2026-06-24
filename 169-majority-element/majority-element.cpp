class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for(int val : nums){
            freq[val]++;
        }
        for(auto& pair : freq){
            if(pair.second > n/2){
                return pair.first;
            }
        }
        return -1;
    }
};