function findMaxAverage(nums: number[], k: number): number {
    let windowSum=0;
    for(let i=0;i<k;i++)windowSum+=nums[i];
    let maxSum = windowSum;
    let windowEnd = k, windowStart=0;
    while(windowEnd<nums.length){
        windowSum = nums[windowEnd]-nums[windowStart]+windowSum;
        maxSum = Math.max(windowSum,maxSum);
        windowEnd++;
        windowStart++;
    }
    return (maxSum/k);
};