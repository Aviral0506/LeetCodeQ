class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        int maxSum = nums[0];
        int i = 1;
        int n = nums.size();
        while(i < n){
            sum = max(nums[i] , sum + nums[i]);
            maxSum = max(sum , maxSum);
            i++;
        }
        return maxSum;
    }
};