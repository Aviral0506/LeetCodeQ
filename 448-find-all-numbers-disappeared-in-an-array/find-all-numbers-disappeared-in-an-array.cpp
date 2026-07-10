class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(), nums.end());
        vector<int> dis;
        for(int i = 1; i <= nums.size(); i++){
            if(seen.find(i) == seen.end()){
                dis.push_back(i);
            }
        }
        return dis;
    }
};