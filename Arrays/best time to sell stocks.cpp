class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0, buy = prices[0];
        for (int i = 1; i < prices.size(); i++)
        {
            int temp = prices[i] - buy;
            if (temp > profit) profit = temp;
            if (prices[i] < buy) buy = prices[i];
        }
        return profit;
        
    }
};
