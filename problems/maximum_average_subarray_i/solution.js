/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var findMaxAverage = function(nums, k) {
    let windowSum=0;
    for(let i=0;i<k;i++)windowSum+=nums[i];
    let maxSum = windowSum/k;
    let windowEnd = k, windowStart=0;
    while(windowEnd<nums.length){
        windowSum+= nums[windowEnd]-nums[windowStart];
        maxSum = Math.max(windowSum/k,maxSum);
        windowEnd++;
        windowStart++;
    }
    return maxSum;
};