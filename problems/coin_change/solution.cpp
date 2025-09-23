class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1, INT_MAX);
        dp[0]=0;
        for(int currAmount=1;currAmount<=amount;currAmount++){
            for(auto coin: coins){
                if(currAmount>=coin){
                    int remainingAmount = currAmount - coin;
                    if(dp[remainingAmount]!=INT_MAX)dp[currAmount]=min(dp[remainingAmount]+1,dp[currAmount]);
                }
            }
        }
        return dp[amount]==INT_MAX?-1:dp[amount];
    }
};