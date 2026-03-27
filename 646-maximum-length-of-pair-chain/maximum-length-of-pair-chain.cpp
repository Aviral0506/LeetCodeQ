class Solution {
public:
    int t[1001][1001];
    int solve(vector<vector<int>>& pairs, int i, int p){
        int n = pairs.size();
        if(i >= n){
            return 0;
        }
        if(p != -1 && t[i][p] != -1) return t[i][p];
        int take = 0;
        if(p == -1 || pairs[i][0] > pairs[p][1]){
            take = 1 + solve(pairs , i + 1, i);
        }
        int skip = solve(pairs, i + 1, p);
        if(p != -1) {
            return t[i][p] = max(skip , take);
        }
        return max(skip , take);
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        memset(t, -1, sizeof(t));
        sort(pairs.begin(), pairs.end());
        return solve(pairs, 0, -1);
    }
};