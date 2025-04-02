function maxSubArray(nums: number[]): number {
    let maxSum : number = Number.MIN_SAFE_INTEGER;
    let currSum : number = 0;
    for(let i:number=0;i<nums.length;i++){
        currSum=Math.max(nums[i],currSum+nums[i]);
        maxSum = Math.max(currSum,maxSum);
    }
    return maxSum;
};