class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int len = prices.size();
        
        int min_cp = prices[0];
        
        for(int i=1; i<len; i++)
        {
            if(prices[i] <= min_cp)
            {
                min_cp = prices[i];
            }
            else
            {
                int currProfit = prices[i] - min_cp;
                if(maxProfit < currProfit)
                {
                    maxProfit = currProfit;
                }
            }
        }
        return maxProfit;
    }
};