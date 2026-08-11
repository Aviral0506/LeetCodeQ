class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char , int> freq;
        int i = 0, j = 0;
        int cnt = 0;
        int maxCnt = 0;
        for(int i = 0; i < s.length(); i++) {
            freq[s[i]]++;
            while(freq[s[i]] > 1) {
                freq[s[j]]--;
                j++;
            }
            maxCnt = max(maxCnt , i - j + 1);
        }
        return maxCnt;
    }
};