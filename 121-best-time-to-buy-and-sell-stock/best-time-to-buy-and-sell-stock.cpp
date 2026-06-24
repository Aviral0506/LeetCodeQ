class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int profit = 0;
        int bestBuy = prices[0];
        for(int i = 1; i < prices.size(); i++){
            profit = prices[i] - bestBuy;
            bestBuy = min(bestBuy, prices[i]);
            maxPro = max(profit , maxPro);
        }
        return maxPro;
    }
};