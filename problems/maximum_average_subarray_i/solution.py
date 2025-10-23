class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        windowSum=0;
        for i in range(0,k):
            windowSum+=nums[i]
        res=windowSum/k
        for i in range(k,len(nums)):
            windowSum+=nums[i]-nums[i-k]
            res = max(windowSum/k,res)
        return res