class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        for(int i = 0; i < nums.size(); i++){
            int sum = nums[l] + nums[r];
            if(sum == target){
                return {l + 1 , r + 1};
            }
            else if(sum > target){
                r--;
            }
            else{
                l++;
            }
        }
        return {-1 , -1};
    }
};