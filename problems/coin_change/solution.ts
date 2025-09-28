function coinChange(coins: number[], amount: number): number {
    let dp:number[]= new Array(amount+1).fill(Infinity);
    dp[0]=0;
    for(let i=1;i<=amount;i++){
        for(let coin of coins){
            if(i>=coin && dp[i-coin]!==Infinity)dp[i] = Math.min(dp[i-coin]+1,dp[i]);
        }
    }
    return dp[amount]===Infinity?-1:dp[amount];
};