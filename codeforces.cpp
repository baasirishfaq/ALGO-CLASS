class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int maxprofit = 0;
        for(int i = 0; i < prices.size(); i++)
        {
            if(prices[i])
        }
        for(int i = 0; i < prices.size(); i++)
        {
            for(int j = i+1; j<prices.size(); j++)
            {
                int profit = prices[j] - prices[i];
                maxprofit = max(profit, maxprofit);
            }
        }
        if (maxprofit < 0) return 0;
        return maxprofit;    
    }
};