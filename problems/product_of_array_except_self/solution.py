class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n=len(nums)
        dp=[1]*n
        prefix = 1
        suffix = 1
        for i in range(n):
            dp[i]=prefix
            prefix*=nums[i]
            
        for j in range(n-1,-1,-1):
            dp[j]*=suffix
            suffix *= nums[j]
        return dp
        