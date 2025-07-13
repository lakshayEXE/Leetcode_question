class Solution {
public:
    int maxProfit(vector<int>& nums) {

        // int mini =nums[0];
        // int profit = 0;

        // for(int i = 1 ; i< nums.size();i++){
        //     mini =min(mini,nums[i]);
        //     profit = max(nums[i] - mini,profit);
        // }
        // return profit;


        // int profit = 0 ;
        // for(int i = 0; i < nums.size() ; i++){
        //     int buyprice = nums[i];

        //     for(int j = i+1 ;j<nums.size() ;j++){
        //         profit = max(profit , nums[j] - buyprice);
        //     }
        // }

        // return profit;

        // int profit = 0;
        // int cp = INT_MAX;

        // for(int i = 0 ; i < nums.size() ; i++){
        //     cp = min(nums[i] ,cp );
        //     profit = max(profit , nums[i] - cp );
        // }
        // return profit;



        int buyPrice = INT_MAX;
        int profit = INT_MIN;
        for(int i =0; i<nums.size() ;i++){
            if(buyPrice > nums[i]){
                buyPrice = nums[i];
            }
            int currProfit = nums[i]-buyPrice;
            profit = max(profit , currProfit);
        }
        return profit;

    }
};