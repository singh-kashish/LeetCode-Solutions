class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}
        for i,x in enumerate(nums):
            need = target-x
            if need in seen:
                return (seen[need],i)
            seen[x]=i
        return (-1,-1)        
        