class Solution {
public:
    int dp[1000];
    int solve(vector<int>& cost, int i) {
        int n = cost.size();
        if(i >= n) {
            return 0;
        }
        if(dp[i] != -1) {
            return dp[i];
        }
        int take = cost[i] + min(solve(cost , i + 1), solve(cost , i + 2));
        return dp[i] = take;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
         memset(dp, -1 , sizeof(dp));
         return min(solve(cost , 1) , solve(cost , 0));
    }
};