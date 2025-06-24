function wordBreak(s: string, wordDict: string[]): boolean {
    const dict = new Set<string>(wordDict);
    let n = s.length;
    const dp = new Array<boolean>(n+1).fill(false);
    dp[0]=true;
    for(let i=1;i<=n;i++){
        for(let j=0;j<i;j++){
            if(dp[j] && dict.has(s.slice(j,i))){
                dp[i]=true;
                break;
            }
        }
    }
    return dp[n];
};