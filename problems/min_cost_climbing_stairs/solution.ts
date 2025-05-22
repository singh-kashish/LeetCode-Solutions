function minCostClimbingStairs(cost: number[]): number {
    let n = cost.length;
    if(n==2)return Math.min(cost[0],cost[1]);
    else{
    let dp = new Array<number>(cost.length);
    dp[0]=cost[0];
    dp[1]=cost[1];
    for(let itr=2;itr<n;itr++){
        dp[itr]= cost[itr]+Math.min(dp[itr-1],dp[itr-2]);
    }
    return Math.min(dp[n-1],dp[n-2]);

    }
};