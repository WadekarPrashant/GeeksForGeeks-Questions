class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &prices)

{
     
         int profit = 0;
        for(int i = 1; i < n; i++){
            if(prices[i] > prices[i-1]){
                profit += prices[i] - prices[i-1];
            }
        }
        return profit;
    }
};
