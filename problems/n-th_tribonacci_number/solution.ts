let dp:Map<number,number>=new Map([[0,0],[1,1],[2,1]]);
function tribonacci(n: number): number {
    if(dp.has(n))return dp.get(n);
    else{
        const storage:number=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        dp.set(n,storage);
        return storage;
    }
};