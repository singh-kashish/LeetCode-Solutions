class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<unsigned long long>dp(amount+1,0);
        dp[0] = 1;
        for (int coin : coins) {
            if (coin > amount) break;
            for (int a = coin; a <= amount; ++a) {
                dp[a] += dp[a - coin];
            }
        }
        return static_cast<int>(dp[amount]);
    }

};