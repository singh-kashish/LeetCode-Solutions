let dp =new Map<number,number>([[0,0],[1,1]]);
function fib(n: number): number {
    if(dp.has(n))return dp.get(n);
    else {
        const storag:number=fib(n-1)+fib(n-2);
        dp.set(n,storag);
        return storag;
        }
};