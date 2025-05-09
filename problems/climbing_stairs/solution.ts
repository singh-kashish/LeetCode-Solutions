function climbStairs(n: number): number {
    if(n==1)return 1;
    else if(n==2)return 2;
    let resArr = new Array(n+1);
    resArr[0]=1;
    resArr[1]=2;
    for(let i=2;i<=n;i++)resArr[i] = resArr[i-1] + resArr[i-2];
    return resArr[n-1];
};