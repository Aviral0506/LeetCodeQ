class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0;
        int n = nums.size() - 1;
        while(i < n){
            if(nums[i] != nums[i + 1]){
                i++;
            }else{
                return true;
            }
        }
        return false;
    }
};