class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        curr = 0
        maxSubSum=-2**1000
        for i in range(0,len(nums)):
            curr = max(nums[i]+curr,nums[i])
            maxSubSum = max(maxSubSum, curr)
        return maxSubSum
        