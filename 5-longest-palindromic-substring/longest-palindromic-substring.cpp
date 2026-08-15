class Solution {
public:
    string expand(string s, int left , int right) {
        while(left >= 0 && right < s.size() && s[left] == s[right]) {
            left--;
            right++;
        }
        return s.substr(left + 1, right - left - 1);
    }
    string longestPalindrome(string s) {
        string ans = "";
        int n = s.size();
        for(int i = 0; i < n; i++) {

            string p1 = expand(s, i, i);

            string p2 = expand(s, i, i + 1);

            if(p1.size() > ans.size()) {
                ans = p1;
            }
            if(p2.size() > ans.size()) {
                ans = p2;
            }
        }
        return ans;
    }
};