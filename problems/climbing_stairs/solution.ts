function climbStairs(n: number): number {
    let dp:number[]= new Array(n+1);
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    for(let itr=3 ; itr<=n;itr++)dp[itr]=dp[itr-1]+dp[itr-2];
    return dp[n];
};