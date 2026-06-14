class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0;
        int n = nums.size();
        for(int fast = 0; fast < n; fast++){
            if(nums[fast] != 0){
                nums[slow++] = nums[fast];
            }
        }
        while(slow < n){
            nums[slow++] = 0;
        }
    }
};