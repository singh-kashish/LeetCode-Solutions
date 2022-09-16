class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 1 , n = prices.size();
        int result=0;
        while( i < n ){
                if(prices[i]>prices[i-1]){
                    result+=prices[i]-prices[i-1];
                }
            i++;
        }
        return result;
    }
};