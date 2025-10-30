function findTargetSumWays(nums: number[], target: number): number {
    let count=0;
    // function dfs(i:number, sum:number):void{
    //     if(i===nums.length){
    //         if(target===sum){
    //             count++;   
    //         }
    //         return;
    //     }
    //     dfs(i+1,sum-nums[i]);
    //     dfs(i+1,sum+nums[i]);
    // }
    // dfs(0,0);
    // return count;
    //Memo/dp below:
    function dfsWithDp(i:number,sum:number):number{
        if(i===nums.length)return sum===target?1:0;
        const key = `${i},${sum}`;
        if(memo.has(key))return memo.get(key);
        const res = dfsWithDp(i+1,sum+nums[i])+dfsWithDp(i+1,sum-nums[i]);
        memo.set(key,res);
        return res; 
    }
    const memo = new Map<string,number>();
    return dfsWithDp(0,0);
};