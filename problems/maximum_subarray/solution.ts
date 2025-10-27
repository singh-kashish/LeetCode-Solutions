function maxSubArray(nums: number[]): number {
    let largest =-Infinity;
    let curr=0;
    nums.forEach((x)=>{
        curr = Math.max(x,curr+x);
        largest = Math.max(curr,largest);
    })
    return largest
};