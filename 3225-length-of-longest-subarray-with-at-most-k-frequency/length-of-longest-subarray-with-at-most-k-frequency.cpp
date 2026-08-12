class Solution {
public:
    int maxSubarrayLength(vector<int>& s, int k) {
        int cnt = 0, maxCnt = 0;
        unordered_map<int, int> freq;
        int i = 0, j = 0;
        for(i = 0; i < s.size(); i++){
            freq[s[i]]++;
            while(freq[s[i]] > k){
                 freq[s[j]]--;
                j++;
            }
            maxCnt = max(maxCnt , i - j + 1);
        }
        return maxCnt;        
    }
};