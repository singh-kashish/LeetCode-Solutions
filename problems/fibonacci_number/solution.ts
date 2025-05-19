function fib(n: number): number {
        // let res : number = 0;
        // if(n==0)return res;
        // else if(n==1)return 1;
        // else return fib(n-1)+fib(n-2);
    let dp : Array<number> = new Array(n);
    dp[0]=0;
    dp[1]=1;
    for(let i:number = 2 ; i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
};