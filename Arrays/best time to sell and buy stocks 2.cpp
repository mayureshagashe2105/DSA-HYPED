class Solution {
public:
    int maxProfit(vector<int>& prices) {
        prices.push_back(0);
        int buy = prices[0], cum_prof = 0;
        for (int i = 1; i < prices.size() - 1; ++i)
        {
            if (prices[i] > buy)
            {
                if (prices[i + 1] <= prices[i]) 
                {
                    cum_prof += (prices[i] - buy);
                    buy = prices[i];
                }

            }
            else buy = prices[i];
        }
        return cum_prof;
    }
};
