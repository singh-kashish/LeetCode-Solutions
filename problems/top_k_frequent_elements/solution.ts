function topKFrequent(nums: number[], k: number): number[] {
    // let res: number[]=[];
    // let freq = new Map<number,number>();
    // for(const x of nums){
    //     freq.set(x,(freq.get(x)||0)+1);
    // }
    // const arr = Array.from(freq.entries())
    // .sort((a,b)=>b[1]-a[1]);
    // let itr=0;
    // while(k--){
    //     res.push(arr[itr][0]);
    //     itr++;
    // }
    // return res;
    
    //Using Bucket Sort below:-
    let freq= new Map<number,number>();
    let n = nums.length;
    for(const x of nums){
        freq.set(x,(freq.get(x)||0)+1);
    }
    const buckets : number[][]=new Array(n+1).fill(null).map(x=>[]);
    for(const [num,count] of freq){
        buckets[count].push(num);
    }
    let res = new Array<number>();
    for(let itr = n;itr>=0 && res.length<k;itr--){
        for(const x of buckets[itr]){
            res.push(x);
            if(k==res.length)break;
        }
    }
    return res;
};