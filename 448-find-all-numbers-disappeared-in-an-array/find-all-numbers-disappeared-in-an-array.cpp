class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> seen(nums.begin() , nums.end());
        int n = nums.size();
        vector<int> findDis;
        for(int i = 1; i <= n; i++){
            if(seen.find(i) == seen.end()){
                findDis.push_back(i);
            }
        }
        return findDis;
    }
};