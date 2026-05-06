class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy = prices[0];
        int profit = 0, maxPro = 0;
        for(int i = 1; i < prices.size(); i++){
            profit = prices[i] - bestBuy;
            bestBuy = min(prices[i] , bestBuy);
            maxPro = max(profit , maxPro);
        }
        return maxPro;
    }
};