class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // maintain min value from the left , and profit
        int maxProfit = 0 , minPrice = INT_MAX;
        int n = prices.size();
        for(int i = 0; i < n ; i++ ){
            if(prices[i]<minPrice){
                minPrice = prices[i];
            }
            else if(prices[i]-minPrice>maxProfit){
                maxProfit = prices[i]-minPrice;
            }
        }
        return maxProfit;
    }
};