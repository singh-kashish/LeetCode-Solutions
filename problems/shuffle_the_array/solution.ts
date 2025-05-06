function shuffle(nums: number[], n: number): number[] {
    let i1 = 0, i2 = n;
    let res = new Array<number>(2*n);
    for(let i = 0;i<2*n;i++){
        res[i]=(i%2==0)?nums[i1++]:nums[i2++];
    }
    return res;
};