class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
        int currProfit = 0;
        int bestBuy = prices[0];
        for(int i = 1; i < n; i++){
            currProfit = prices[i] - bestBuy;
            if(prices[i] < bestBuy) {
                bestBuy = prices[i];
            }
            maxProfit = max(maxProfit , currProfit);
        }
        return maxProfit;
    }
};