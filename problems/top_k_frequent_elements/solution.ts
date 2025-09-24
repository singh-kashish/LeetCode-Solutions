function topKFrequent(nums: number[], k: number): number[] {
    let res: number[]=[];
    let freq = new Map<number,number>();
    for(const x of nums){
        freq.set(x,(freq.get(x)||0)+1);
    }
    const arr = Array.from(freq.entries())
    .sort((a,b)=>b[1]-a[1]);
    let itr=0;
    while(k--){
        res.push(arr[itr][0]);
        itr++;
    }
    return res;
};