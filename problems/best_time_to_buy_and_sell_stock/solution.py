class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minPrice = 2**1000
        maxProf = 0
        for value in prices:
            if minPrice>value:
                minPrice=value
            maxProf = max(maxProf,value-minPrice)    
        return maxProf
        