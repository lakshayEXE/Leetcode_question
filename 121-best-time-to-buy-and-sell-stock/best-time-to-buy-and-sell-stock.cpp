class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int profit  =0 ;
        int curr_profit = 0;
        for(int i= 0; i<prices.size() ;i++){
            mini = min(mini,prices[i]);
            curr_profit = prices[i]-mini;
            profit = max(curr_profit , profit);
        }
        return profit;
    }
};